

/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/
import QtQuick 6.7
import QtQuick.Controls 6.7
import UntitledProject1

Rectangle {
    id: rectangle
    width: Constants.width
    height: Constants.height

    color: Constants.backgroundColor

    Text {
        id: title_versionnum
        y: 22
        text: qsTr("Alex_GUI_v1")
        font.family: Constants.font.family
        anchors.topMargin: 45
        anchors.horizontalCenterOffset: 0
        anchors.horizontalCenter: parent.horizontalCenter

        SequentialAnimation {
            id: animation

            ColorAnimation {
                id: colorAnimation1
                target: rectangle
                property: "color"
                to: "#2294c6"
                from: Constants.backgroundColor
            }

            ColorAnimation {
                id: colorAnimation2
                target: rectangle
                property: "color"
                to: Constants.backgroundColor
                from: "#2294c6"
            }
        }
    }

    Label {
        id: target_label
        x: 626
        y: 84
        width: 62
        height: 40
        text: qsTr("Target")
        font.pointSize: 16
    }

    Label {
        id: actual_label
        x: 726
        y: 84
        width: 62
        height: 40
        text: qsTr("Actual")
        font.pointSize: 16
    }
    states: [
        State {
            name: "clicked"

            PropertyChanges {
                target: title_versionnum
                text: qsTr("Button Checked")
            }
        }
    ]
}
