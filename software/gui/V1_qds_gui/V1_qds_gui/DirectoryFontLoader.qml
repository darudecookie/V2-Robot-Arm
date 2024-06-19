// Copyright (C) 2019 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

import QtQuick 6.6
import Qt.labs.folderlistmodel 6.6

QtObject {
    id: loader

    property url fontDirectory: Qt.resolvedUrl("../../V1_qds_guiContent/" + relativeFontDirectory)
    property string relativeFontDirectory: "fonts"

    function loadFont(url) {
        var fontLoader = Qt.createQmlObject('import QtQuick 2.15; FontLoader { source: "' + url + '"; }',
                                            loader,
                                            "dynamicFontLoader");
    }

    property FolderListModel folderModel: FolderListModel {
        id: folderModel
        folder: loader.fontDirectory
        nameFilters: [ "*.ttf", "*.otf" ]
        showDirs: false

        onStatusChanged: {
            if (folderModel.status == FolderListModel.Ready) {
                var i
                for (i = 0; i < count; i++) {
                    loadFont(folderModel.get(i, "fileURL"))
                }
            }
        }
    }
}
