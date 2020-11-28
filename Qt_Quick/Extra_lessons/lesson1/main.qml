import QtQuick 2.15
import QtQuick.Controls 1.3
import QtQuick.Layouts 1.1
import QtGraphicalEffects 1.0
import QtQuick.Scene3D 2.0
import Qt3D.Core 2.0 
import Qt3D.Render 2.0
import Qt3D.Input 2.0
import Qt3D.Extras 2.15
import QtQuick.Dialogs 1.3

import pcl 1.0



Item {
    
    id:root

    property var pointCloudData :  PointcloudReader {
        filename: ""
    }

    FileDialog {
        id: fileDialog
        //visible: fileDialogVisible.checked
        title: "Please choose a file"
        folder: shortcuts.home

        onAccepted: {
            console.log("You chose: " + fileDialog.fileUrls[0])
            //root3d.stlMeshData.source = fileDialog.fileUrls[0];
            pointCloudData.filename=fileDialog.fileUrls[0].slice(7)
            //readBunny.setFilename(fileDialog.fileUrls[0].slice(7))
            //console.log(root.pointCloudData.filename)
            //scene_root.pointcloudgeom.setPointcloud(root.pointCloudData.pointcloud)
            //pointcloud.components[0].geometry.setPointcloud(root.pointCloudData.pointcloud)
            //pointcloud.components[0].geometry = scene_root.pointcloudgeom
            //pointcloudgeom.setPointcloud(readBunny.pointcloud)
            //pointcloud.components[0].geometry = pointcloudgeom
            

        }
        onRejected: {
            console.log("Canceled")
            //Qt.quit()
        }
    }






    Row {
        Button {
            text: "read pcd"
            onClicked:{
                console.log("read pcd")
                fileDialog.open()
            }
        }
    }

    Rectangle {
        id: scene
        anchors.fill: parent
        anchors.margins: 50

        Scene3D {
            id: scene3d
            anchors.fill:parent
            anchors.margins:10
            focus: true
            aspects: ["input", "logic"]
            cameraAspectRatioMode: Scene3D.AutomaticAspectRatio

            Entity {
                id: scene_root

                Camera {
                    id: camera
                    projectionType: CameraLens.PerspectiveProjection
                    fieldOfView: 75
                    aspectRatio: 16/9
                    nearPlane : 0.1
                    farPlane : 1000.0
                    position: Qt.vector3d( 0.0, 0.0, -20.0 )
                    upVector: Qt.vector3d( 0.0, 1.0, 0.0 )
                    viewCenter: Qt.vector3d( 0.0, 0.0, 0.0 )
                }

                OrbitCameraController{
                    camera: camera
                }

                components: [
                    RenderSettings {
                        activeFrameGraph: ForwardRenderer {
                            clearColor: Qt.rgba(0, 0.5, 1, 1)
                            camera: camera
                            //showDebugOverlay: true
                        }
                    },
                    // Event Source will be set by the Qt3DQuickWindow
                    InputSettings { }
                ]

                PhongMaterial {
                    id: material
                }

                Entity {
                    id: pointcloudSurfel
                    property var meshTransform: Transform {
                            id: pointcloudSurfelTransform
                            //property real userAngle: rotator.rotationAnimation
                            scale: 20
                            //translation: Qt.vector3d(0, 2, 0)
                            //rotation: fromAxisAndAngle(Qt.vector3d(0, 1, 0), userAngle)
                        }
                    
                    


                    property GeometryRenderer mesh: GeometryRenderer {
                        geometry: PointcloudGeometry { 
                            pointcloud: pointCloudData.pointcloud 
                            Component.onCompleted:{
                                pointCloudData.pointcloudChanged.connect(updatePointcloud)
                                this.pointcloudChanged.connect(updatePointcloudGeom)
                                console.log("connect!!")
                            }
                            function updatePointcloud(){
                                console.log("update")
                                console.log(pointCloudData.filename)
                                //pointcloud = pointCloudData2.pointcloud
                                //pointcloud = pointCloudData.pointcloud
                                
                            }
                            function updatePointcloudGeom(){
                                console.log("update2")
                            }
                        }
                        primitiveType: GeometryRenderer.Points

                    }
                    components: [ mesh, material , meshTransform]
                }

            }
        }
    }
}