/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/

import QtQuick 6.6
import QtQuick.Controls 6.6
import V1_qds_gui

Rectangle {
    width: Constants.width
    height: Constants.height

    color: Constants.backgroundColor

    Text {
        text: qsTr("Hello V1_qds_gui")
        anchors.verticalCenterOffset: -532
        anchors.horizontalCenterOffset: 0
        anchors.centerIn: parent
        font.family: Constants.font.family
    }

    Dial {
        id: dial
        x: 444
        y: 315
        width: 50
        height: 50
        value: 0
        from: -1
        endAngle: 180
        startAngle: -180
    }
}
