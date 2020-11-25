# HelloWorld
QMLにてhelloworldのウィンドウを表示する

## qmlの使用方法の基礎部分
```
QQuickView view;
view.setSource(QUrl("qrc:/main.qml"));
view.show()
```