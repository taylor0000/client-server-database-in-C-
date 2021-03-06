<?xml version='1.0' encoding='utf-8' ?>
<!-- C++Builder XML Project -->
<PROJECT>
  <MACROS>
    <VERSION value="BCB.06.00"/>
    <PROJECT value="file_1.exe"/>
    <OBJFILES value="file_1.obj file_2.obj file_3.obj file_4.obj "/>
    <RESFILES value="file_1.res"/>
    <IDLFILES value=""/>
    <IDLGENFILES value=""/>
    <DEFFILE value=""/>
    <RESDEPEN value="$(RESFILES) file_1.dfm file_2.dfm file_3.dfm file_4.dfm"/>
    <LIBFILES value=""/>
    <LIBRARIES value="vclx.lib rxctl6.lib dbexpress.lib dsnap.lib cds.lib ibxpress.lib 
      adortl.lib dbrtl.lib vcldb.lib rtl.lib vcl.lib"/>
    <SPARELIBS value="vcl.lib rtl.lib vcldb.lib dbrtl.lib adortl.lib ibxpress.lib cds.lib 
      dsnap.lib dbexpress.lib rxctl6.lib vclx.lib"/>
    <PACKAGES value="vcl.bpi rtl.bpi dbrtl.bpi adortl.bpi vcldb.bpi vclx.bpi bdertl.bpi 
      vcldbx.bpi ibxpress.bpi dsnap.bpi cds.bpi bdecds.bpi qrpt.bpi teeui.bpi 
      teedb.bpi tee.bpi dss.bpi teeqr.bpi visualclx.bpi visualdbclx.bpi 
      dsnapcrba.bpi dsnapcon.bpi bcbsmp.bpi vclie.bpi xmlrtl.bpi inet.bpi 
      inetdbbde.bpi inetdbxpress.bpi inetdb.bpi nmfast.bpi webdsnap.bpi 
      bcbie.bpi websnap.bpi soaprtl.bpi dclocx.bpi dbexpress.bpi dbxcds.bpi 
      indy.bpi bcb2kaxserver.bpi"/>
    <PATHCPP value=".;"/>
    <PATHPAS value=".;"/>
    <PATHRC value=".;"/>
    <PATHASM value=".;"/>
    <DEBUGLIBPATH value="$(BCB)\lib\debug"/>
    <RELEASELIBPATH value="$(BCB)\lib\release"/>
    <LINKER value="ilink32"/>
    <USERDEFINES value=""/>
    <SYSDEFINES value="NO_STRICT"/>
    <MAINSOURCE value="file_1.cpp"/>
    <INCLUDEPATH value="&quot;D:\Programs\RX lib\RX\Units&quot;;D:\Programs\Borland\CBuilder6\Projects;D:\Lab_1_3;$(BCB)\include;$(BCB)\include\vcl"/>
    <LIBPATH value="$(BCB)\Projects\Lib;&quot;D:\Programs\RX lib\RX\Units&quot;;D:\Programs\Borland\CBuilder6\Projects;D:\Lab_1_3;$(BCB)\lib\obj;$(BCB)\lib"/>
    <WARNINGS value="-w-par"/>
    <OTHERFILES value=""/>
  </MACROS>
  <OPTIONS>
    <IDLCFLAGS value="-I&quot;D:\Programs\RX lib\RX\Units&quot; -ID:\Programs\Borland\CBuilder6\Projects 
      -ID:\Lab_1_3 -I$(BCB)\include -I$(BCB)\include\vcl -src_suffix cpp -boa"/>
    <CFLAG1 value="-O2 -H=$(BCB)\lib\vcl60.csm -Hc -Vx -Ve -X- -a8 -b- -k- -vi -c -tW -tWM"/>
    <PFLAGS value="-$Y- -$L- -$D- -$A8 -v -JPHNE -M"/>
    <RFLAGS value=""/>
    <AFLAGS value="/mx /w2 /zn"/>
    <LFLAGS value="-D&quot;&quot; -aa -Tpe -x -Gn"/>
    <OTHERFILES value=""/>
  </OPTIONS>
  <LINKER>
    <ALLOBJ value="c0w32.obj sysinit.obj $(OBJFILES)"/>
    <ALLRES value="$(RESFILES)"/>
    <ALLLIB value="$(LIBFILES) $(LIBRARIES) import32.lib cp32mt.lib"/>
    <OTHERFILES value=""/>
  </LINKER>
  <FILELIST>
      <FILE FILENAME="file_1.res" FORMNAME="" UNITNAME="file_1.res" CONTAINERID="ResTool" DESIGNCLASS="" LOCALCOMMAND=""/>
      <FILE FILENAME="file_2.cpp" FORMNAME="" UNITNAME="file_2" CONTAINERID="CCompiler" DESIGNCLASS="" LOCALCOMMAND=""/>
      <FILE FILENAME="file_3.cpp" FORMNAME="Form1" UNITNAME="file_3" CONTAINERID="CCompiler" DESIGNCLASS="" LOCALCOMMAND=""/>
      <FILE FILENAME="file_4.cpp" FORMNAME="Form2" UNITNAME="file_4" CONTAINERID="CCompiler" DESIGNCLASS="" LOCALCOMMAND=""/>

  </FILELIST>
  <BUILDTOOLS>
  </BUILDTOOLS>

  <IDEOPTIONS>
[Version Info]
IncludeVerInfo=0
AutoIncBuild=0
MajorVer=1
MinorVer=0
Release=0
Build=0
Debug=0
PreRelease=0
Special=0
Private=0
DLL=0
Locale=1049
CodePage=1251

[Version Info Keys]
CompanyName=
FileDescription=
FileVersion=1.0.0.0
InternalName=
LegalCopyright=
LegalTrademarks=
OriginalFilename=
ProductName=
ProductVersion=1.0.0.0
Comments=

[Debugging]
DebugSourceDirs=$(BCB)\source\vcl

[Parameters]
RunParams=
Launcher=
UseLauncher=0
DebugCWD=
HostApplication=
RemoteHost=
RemotePath=
RemoteLauncher=
RemoteCWD=
RemoteDebug=0

[Compiler]
ShowInfoMsgs=0
LinkDebugVcl=0
LinkCGLIB=0

[CORBA]
AddServerUnit=1
AddClientUnit=1
PrecompiledHeaders=1

[Language]
ActiveLang=
ProjectLang=
RootDir=
  </IDEOPTIONS>
</PROJECT>
