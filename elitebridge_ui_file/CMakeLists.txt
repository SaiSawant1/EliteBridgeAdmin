cmake_minimum_required(VERSION 3.5)

project(elitebridge_ui_file VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Sql LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql LinguistTools)

set(TS_FILES elitebridge_ui_file_en_IN.ts)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        admin.cpp
        admin.h
        admin.ui
        reporting.cpp
        reporting.h
        reporting.ui
        edi.cpp
        edi.h
        edi.ui
        sysconfig.cpp
        sysconfig.h
        sysconfig.ui
        process.cpp
        process.h
        process.ui
        systemlogin.h
        systemlogin.cpp
        systemlogin.ui
        userwindow.cpp
        userwindow.h
        userwindow.ui
        ClickableLabel.h
        newuserform.cpp
        newuserform.h
        newuserform.ui
        itemsmainwindow.cpp
        itemsmainwindow.h
        itemsmainwindow.ui
        newitemform.cpp
        newitemform.ui
        newitemform.h
        jobmainwindow.cpp
        jobmainwindow.h
        jobmainwindow.ui
        newjobform.cpp
        newjobform.h
        newjobform.ui
        createusertransaction.cpp
        createusertransaction.h
        createusertransaction.ui
        viewgrants.cpp
        viewgrants.h
        viewgrants.ui
        usergroupmainwindow.cpp
        usergroupmainwindow.h
        usergroupmainwindow.ui
        newgroupform.cpp
        newgroupform.h
        newgroupform.ui
        updateuser.cpp
        updateuser.h
        updateuser.ui
        selectgroup.cpp
        selectgroup.h
        selectgroup.ui
        adminsetup.cpp
        adminsetup.h
        adminsetup.ui
        grouptransaction.cpp
        grouptransaction.h
        grouptransaction.ui
        itemgroup.cpp
        itemgroup.h
        itemgroup.ui
        itemsubgroup.cpp
        itemsubgroup.h
        itemsubgroup.ui
        itemdetaildialog.h itemdetaildialog.cpp itemdetaildialog.ui
        itemlocationwindow.h itemlocationwindow.cpp itemlocationwindow.ui
        userdetails.h userdetails.cpp userdetails.ui
        machine.h machine.cpp machine.ui
        updateusertransaction.h updateusertransaction.cpp updateusertransaction.ui

        terminology.h terminology.cpp terminology.ui
        shareddata.h shareddata.cpp
        img
        auxmainwindow2.h auxmainwindow2.cpp auxmainwindow2.ui
        updategrouptransaction.h updategrouptransaction.cpp updategrouptransaction.ui
        updateusergroup.h updateusergroup.cpp updateusergroup.ui
        newlocationwindow.h newlocationwindow.cpp newlocationwindow.ui
        auxmainwindow.h auxmainwindow.cpp auxmainwindow.ui
        ${TS_FILES}
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(elitebridge_ui_file
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET elitebridge_ui_file APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation

    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    if(ANDROID)
        add_library(elitebridge_ui_file SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(elitebridge_ui_file
            ${PROJECT_SOURCES}
        )
    endif()

    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

target_link_libraries(elitebridge_ui_file PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Sql)

set_target_properties(elitebridge_ui_file PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)



install(TARGETS elitebridge_ui_file
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(elitebridge_ui_file)
endif()
