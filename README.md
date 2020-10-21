## RedisDesktopManager-Windows

[![Build status](https://ci.appveyor.com/api/projects/status/7rb3wvpe06sk3ihp?svg=true)](https://ci.appveyor.com/project/lework/redisdesktopmanager-windows)
[![GitHub All Releases](https://img.shields.io/github/downloads/lework/RedisDesktopManager-Windows/total?style=flat-square&logo=github)](https://github.com/lework/RedisDesktopManager-Windows/releases)
[![GitHub tag (latest SemVer)](https://img.shields.io/github/tag/lework/RedisDesktopManager-Windows?style=flat-square&logo=github)](https://github.com/lework/RedisDesktopManager-Windows/tags)
[![GitHub stars](https://img.shields.io/github/stars/lework/RedisDesktopManager-Windows?style=flat-square&logo=github)](https://github.com/lework/RedisDesktopManager-Windows/stargazers)
[![Project license](https://img.shields.io/github/license/lework/RedisDesktopManager-Windows?style=flat-square&logo=github)](https://github.com/lework/RedisDesktopManager-Windows/blob/master/LICENSE)

基于 [RedisDesktopManager](https://github.com/uglide/RedisDesktopManager) 开源项目编译的 Windows X64 版本


**通知**

从今天开始， 可以在 Microsoft Store 上以超级优惠价 **¥49.00** 来购买 RedisDesktopManager。从此不再有登录，订阅，定期付款，下载缓慢等问题，并以合理的价格获得开源项目持续更新的软件，您每次的购买都会有助于作者 [uglide](https://github.com/uglide) 推动 [RedisDesktopManager](https://github.com/uglide/RedisDesktopManager) 向前发展。

点击此按钮，快速下载软件吧！ <a target="_blank" href='//www.microsoft.com/store/apps/9NDK76ZVZ3TM?cid=storebadge&ocid=badge'>
<img height="20" src='https://developer.microsoft.com/en-us/store/badges/images/Chinese_Simplified_Get_L.png' alt='Get it from Microsoft'/>
</a>


## 安装使用

通过本仓库的 [releases](https://github.com/lework/RedisDesktopManager-Windows/releases) 页面下载`rdm-xxx.zip`文件， 解压后运行其中 `rdm-xxx.exe`文件, 就可以安装 RedisDesktopManager 。 目前只支持x64平台。



## Faq

1. 程序启动出现 `0xc000007b` 错误。
   
    下载运行 [Microsoft Visual C++ 2015-2019 x64](https://aka.ms/vs/16/release/vc_redist.x64.exe) 点击修复选项。
2. 由于找不到 `python37.dll`。

    下载 [python37-deps.zip](https://github.com/lework/RedisDesktopManager-Windows/blob/779ac84cbcad3f5497dd5a87f2c8e9aa93457026/python37-deps.zip?raw=true), 解压到RedisDesktopManager安装目录中。
