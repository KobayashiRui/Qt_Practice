import QtQuick 2.4
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

    property string pcd_file: ""
    property var pointCloudData :  PointcloudReader {
        filename: root.pcd_file
    }

    FileDialog {
        id: fileDialog
        //visible: fileDialogVisible.checked
        title: "Please choose a file"
        folder: shortcuts.home

        onAccepted: {
            console.log("You chose: " + fileDialog.fileUrls[0])
            //root3d.stlMeshData.source = fileDialog.fileUrls[0];
            root.pcd_file=fileDialog.fileUrls[0].slice(7)
            //readBunny.setFilename(fileDialog.fileUrls[0].slice(7))
            console.log(root.pointCloudData.filename)
            scene_root.pointcloudgeom.setPointcloud(root.pointCloudData.pointcloud)
            //pointcloud.components[0].geometry.setPointcloud(root.pointCloudData.pointcloud)
            pointcloud.components[0].geometry = scene_root.pointcloudgeom
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
                    fieldOfView: 45
                    aspectRatio: 16/9
                    nearPlane : 0.1
                    farPlane : 1000.0
                    position: Qt.vector3d( 0.0, 0.0, -40.0 )
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

                TorusGeometry{
                    id: torusgeom
                    radius: 5
                    minorRadius:1
                    rings: 100
                    slices: 20
                }

                property Geometry pointcloudgeom :PointcloudGeometry {
                       pointcloud: root.pointCloudData.pointcloud
                }

                GeometryRenderer {
                    id: pointcloudMesh
                    geometry: scene_root.pointcloudgeom
                    primitiveType: GeometryRenderer.Points
                }

                Entity {
                    id: pointcloud
                    components: [pointcloudMesh, material]
                }

            }
        }
    }
}