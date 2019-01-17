RpcViewMSVS

#### 介绍
RpcView移植vs2013项目,去除rpcrt4.dll文件版本验证,支持win7x64和2008r2x64操作系统,采用qt5.6版本,已发布64位release版本

#### 安装教程

1. 下载qt安装包 http://iso.mirrors.ustc.edu.cn/qtproject/archive/qt/5.6/5.6.0/qt-opensource-windows-x86-msvc2013_64-5.6.0.exe
2. 下载qtvs插件 http://mirrors.ustc.edu.cn/qtproject/archive/vsaddin/qt-vsaddin-msvc2013-2.2.2.vsix
2. 打开vs菜单栏QTVSTool->QTOption添加变量msvc2013_64值C:\Qt\Qt5.6.0\5.6\msvc2013_64
2. 添加环境变量C:\Qt\Qt5.6.0\5.6\msvc2013_64\bin和C:\Qt\Qt5.6.0\Tools\QtCreator\bin
3. 编译MyRpcView项目
4. 运行Build\MyRpcView.exe

#### 使用说明

1. 不同操作操作系统版本,替换项目RpcCore下RpcInternals.h为以下文件

MyRpcView\MyRpcView\RpcViewMain\RpcCore\RpcCore1_32bits\RpcInternals.h for Windows XP

MyRpcView\MyRpcView\RpcViewMain\RpcCore\RpcCore2_32bits\RpcInternals.h for Windows 7 x86

MyRpcView\MyRpcView\RpcViewMain\RpcCore\RpcCore2_64bits\RpcInternals.h for Windows 7 x64

MyRpcView\MyRpcView\RpcViewMain\RpcCore\RpcCore3_32bits\RpcInternals.h for Windows 8 x86

MyRpcView\MyRpcView\RpcViewMain\RpcCore\RpcCore3_64bits\RpcInternals.h for Windows 8 x64

MyRpcView\MyRpcView\RpcViewMain\RpcCore\RpcCore4_32bits\RpcInternals.h for Windows 8.1 and 10 x86

MyRpcView\MyRpcView\RpcViewMain\RpcCore\RpcCore4_64bits\RpcInternals.h for Windows 8.1 and 10 x64

下载地址https://gitee.com/cbwang505/RpcViewMSVS里面有release发布欢迎fork


![](https://i.imgur.com/9qVs6hd.png)
