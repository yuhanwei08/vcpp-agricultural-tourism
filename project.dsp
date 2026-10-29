# Microsoft Developer Studio Project File - Name="project" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=project - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "project.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "project.mak" CFG="project - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "project - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "project - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "project - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "project - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "project - Win32 Release"
# Name "project - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\FeiyiDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\LoginDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\LuruDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\MainFrm.cpp
# End Source File
# Begin Source File

SOURCE=.\NewSet.cpp
# End Source File
# Begin Source File

SOURCE=.\NgDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\NongjuDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\ProgressDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\project.cpp
# End Source File
# Begin Source File

SOURCE=.\project.rc
# End Source File
# Begin Source File

SOURCE=.\ProjectDlg4.cpp
# End Source File
# Begin Source File

SOURCE=.\projectDoc.cpp
# End Source File
# Begin Source File

SOURCE=.\projectView.cpp
# End Source File
# Begin Source File

SOURCE=.\SecondDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\wmpcdrom.cpp
# End Source File
# Begin Source File

SOURCE=.\wmpcdromcollection.cpp
# End Source File
# Begin Source File

SOURCE=.\wmpclosedcaption.cpp
# End Source File
# Begin Source File

SOURCE=.\wmpcontrols.cpp
# End Source File
# Begin Source File

SOURCE=.\wmpdvd.cpp
# End Source File
# Begin Source File

SOURCE=.\wmperror.cpp
# End Source File
# Begin Source File

SOURCE=.\wmperroritem.cpp
# End Source File
# Begin Source File

SOURCE=.\wmpmedia.cpp
# End Source File
# Begin Source File

SOURCE=.\wmpmediacollection.cpp
# End Source File
# Begin Source File

SOURCE=.\wmpnetwork.cpp
# End Source File
# Begin Source File

SOURCE=.\wmpplayer4.cpp
# End Source File
# Begin Source File

SOURCE=.\wmpplayerapplication.cpp
# End Source File
# Begin Source File

SOURCE=.\wmpplaylist.cpp
# End Source File
# Begin Source File

SOURCE=.\wmpplaylistarray.cpp
# End Source File
# Begin Source File

SOURCE=.\wmpplaylistcollection.cpp
# End Source File
# Begin Source File

SOURCE=.\wmpsettings.cpp
# End Source File
# Begin Source File

SOURCE=.\wmpstringcollection.cpp
# End Source File
# Begin Source File

SOURCE=.\XinxiDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\YoukeDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\YuyueDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\YyxxDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\ZhubianDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\ZhuceDlg.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\FeiyiDlg.h
# End Source File
# Begin Source File

SOURCE=.\LoginDlg.h
# End Source File
# Begin Source File

SOURCE=.\LuruDlg.h
# End Source File
# Begin Source File

SOURCE=.\MainFrm.h
# End Source File
# Begin Source File

SOURCE=.\NewSet.h
# End Source File
# Begin Source File

SOURCE=.\NgDlg.h
# End Source File
# Begin Source File

SOURCE=.\NongjuDlg.h
# End Source File
# Begin Source File

SOURCE=.\ProgressDlg.h
# End Source File
# Begin Source File

SOURCE=.\project.h
# End Source File
# Begin Source File

SOURCE=.\ProjectDlg4.h
# End Source File
# Begin Source File

SOURCE=.\projectDoc.h
# End Source File
# Begin Source File

SOURCE=.\projectView.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\SecondDlg.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\wmpcdrom.h
# End Source File
# Begin Source File

SOURCE=.\wmpcdromcollection.h
# End Source File
# Begin Source File

SOURCE=.\wmpclosedcaption.h
# End Source File
# Begin Source File

SOURCE=.\wmpcontrols.h
# End Source File
# Begin Source File

SOURCE=.\wmpdvd.h
# End Source File
# Begin Source File

SOURCE=.\wmperror.h
# End Source File
# Begin Source File

SOURCE=.\wmperroritem.h
# End Source File
# Begin Source File

SOURCE=.\wmpmedia.h
# End Source File
# Begin Source File

SOURCE=.\wmpmediacollection.h
# End Source File
# Begin Source File

SOURCE=.\wmpnetwork.h
# End Source File
# Begin Source File

SOURCE=.\wmpplayer4.h
# End Source File
# Begin Source File

SOURCE=.\wmpplayerapplication.h
# End Source File
# Begin Source File

SOURCE=.\wmpplaylist.h
# End Source File
# Begin Source File

SOURCE=.\wmpplaylistarray.h
# End Source File
# Begin Source File

SOURCE=.\wmpplaylistcollection.h
# End Source File
# Begin Source File

SOURCE=.\wmpsettings.h
# End Source File
# Begin Source File

SOURCE=.\wmpstringcollection.h
# End Source File
# Begin Source File

SOURCE=.\XinxiDlg.h
# End Source File
# Begin Source File

SOURCE=.\YoukeDlg.h
# End Source File
# Begin Source File

SOURCE=.\YuyueDlg.h
# End Source File
# Begin Source File

SOURCE=.\YyxxDlg.h
# End Source File
# Begin Source File

SOURCE=.\ZhubianDlg.h
# End Source File
# Begin Source File

SOURCE=.\ZhuceDlg.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\03455F90E81B87D558179A7FCE0FEDD7.bmp
# End Source File
# Begin Source File

SOURCE=.\res\2af2c2fb04bed32429fe574276398662.bmp
# End Source File
# Begin Source File

SOURCE=.\res\cursor1.cur
# End Source File
# Begin Source File

SOURCE=".\res\IMG_9784(20231201-213735).bmp"
# End Source File
# Begin Source File

SOURCE=".\res\IMG_9803(20231202-153229).bmp"
# End Source File
# Begin Source File

SOURCE=".\res\IMG_9804(20231202-153240).bmp"
# End Source File
# Begin Source File

SOURCE=.\res\project.ico
# End Source File
# Begin Source File

SOURCE=.\res\project.rc2
# End Source File
# Begin Source File

SOURCE=.\res\projectDoc.ico
# End Source File
# Begin Source File

SOURCE=".\res\asset_07.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\asset_08.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\asset_09.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\asset_10.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\resIMG_9594(20231121-204145).bmp"
# End Source File
# Begin Source File

SOURCE=".\res\resIMG_9595(20231121-204157).bmp"
# End Source File
# Begin Source File

SOURCE=".\res\resIMG_9596(20231121-204208).bmp"
# End Source File
# Begin Source File

SOURCE=".\res\resIMG_9600(20231121-204315).bmp"
# End Source File
# Begin Source File

SOURCE=".\res\resIMG_9602(20231121-204441).bmp"
# End Source File
# Begin Source File

SOURCE=".\res\resIMG_9605(20231121-204525).bmp"
# End Source File
# Begin Source File

SOURCE=.\res\Toolbar.bmp
# End Source File
# End Group
# Begin Source File

SOURCE=".\res\hu2y8-g8ew9 (2).wav"
# End Source File
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
# Section project : {4F2DF574-C588-11D3-9ED0-00C04FB6E937}
# 	2:5:Class:CWMPClosedCaption
# 	2:10:HeaderFile:wmpclosedcaption.h
# 	2:8:ImplFile:wmpclosedcaption.cpp
# End Section
# Section project : {EE4C8FE2-34B2-11D3-A3BF-006097C9B344}
# 	2:5:Class:CWMPCdromCollection
# 	2:10:HeaderFile:wmpcdromcollection.h
# 	2:8:ImplFile:wmpcdromcollection.cpp
# End Section
# Section project : {D5F0F4F1-130C-11D3-B14E-00C04F79FAA6}
# 	2:5:Class:CWMPPlaylist
# 	2:10:HeaderFile:wmpplaylist.h
# 	2:8:ImplFile:wmpplaylist.cpp
# End Section
# Section project : {3614C646-3B3B-4DE7-A81E-930E3F2127B3}
# 	2:5:Class:CWMPErrorItem
# 	2:10:HeaderFile:wmperroritem.h
# 	2:8:ImplFile:wmperroritem.cpp
# End Section
# Section project : {94D55E95-3FAC-11D3-B155-00C04F79FAA6}
# 	2:5:Class:CWMPMedia
# 	2:10:HeaderFile:wmpmedia.h
# 	2:8:ImplFile:wmpmedia.cpp
# End Section
# Section project : {EC21B779-EDEF-462D-BBA4-AD9DDE2B29A7}
# 	2:5:Class:CWMPNetwork
# 	2:10:HeaderFile:wmpnetwork.h
# 	2:8:ImplFile:wmpnetwork.cpp
# End Section
# Section project : {4A976298-8C0D-11D3-B389-00C04F68574B}
# 	2:5:Class:CWMPStringCollection
# 	2:10:HeaderFile:wmpstringcollection.h
# 	2:8:ImplFile:wmpstringcollection.cpp
# End Section
# Section project : {8363BC22-B4B4-4B19-989D-1CD765749DD1}
# 	2:5:Class:CWMPMediaCollection
# 	2:10:HeaderFile:wmpmediacollection.h
# 	2:8:ImplFile:wmpmediacollection.cpp
# End Section
# Section project : {10A13217-23A7-439B-B1C0-D847C79B7774}
# 	2:5:Class:CWMPPlaylistCollection
# 	2:10:HeaderFile:wmpplaylistcollection.h
# 	2:8:ImplFile:wmpplaylistcollection.cpp
# End Section
# Section project : {CFAB6E98-8730-11D3-B388-00C04F68574B}
# 	2:5:Class:CWMPCdrom
# 	2:10:HeaderFile:wmpcdrom.h
# 	2:8:ImplFile:wmpcdrom.cpp
# End Section
# Section project : {74C09E02-F828-11D2-A74B-00A0C905F36E}
# 	2:5:Class:CWMPControls
# 	2:10:HeaderFile:wmpcontrols.h
# 	2:8:ImplFile:wmpcontrols.cpp
# End Section
# Section project : {679409C0-99F7-11D3-9FB7-00105AA620BB}
# 	2:5:Class:CWMPPlaylistArray
# 	2:10:HeaderFile:wmpplaylistarray.h
# 	2:8:ImplFile:wmpplaylistarray.cpp
# End Section
# Section project : {8DA61686-4668-4A5C-AE5D-803193293DBE}
# 	2:5:Class:CWMPDVD
# 	2:10:HeaderFile:wmpdvd.h
# 	2:8:ImplFile:wmpdvd.cpp
# End Section
# Section project : {6C497D62-8919-413C-82DB-E935FB3EC584}
# 	2:5:Class:CWMPPlayer4
# 	2:10:HeaderFile:wmpplayer4.h
# 	2:8:ImplFile:wmpplayer4.cpp
# End Section
# Section project : {40897764-CEAB-47BE-AD4A-8E28537F9BBF}
# 	2:5:Class:CWMPPlayerApplication
# 	2:10:HeaderFile:wmpplayerapplication.h
# 	2:8:ImplFile:wmpplayerapplication.cpp
# End Section
# Section project : {9104D1AB-80C9-4FED-ABF0-2E6417A6DF14}
# 	2:5:Class:CWMPSettings
# 	2:10:HeaderFile:wmpsettings.h
# 	2:8:ImplFile:wmpsettings.cpp
# End Section
# Section project : {6BF52A52-394A-11D3-B153-00C04F79FAA6}
# 	2:21:DefaultSinkHeaderFile:wmpplayer4.h
# 	2:16:DefaultSinkClass:CWMPPlayer4
# End Section
# Section project : {A12DCF7D-14AB-4C1B-A8CD-63909F06025B}
# 	2:5:Class:CWMPError
# 	2:10:HeaderFile:wmperror.h
# 	2:8:ImplFile:wmperror.cpp
# End Section
