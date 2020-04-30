## RedisDesktopManager-Windows

[![Build status](https://ci.appveyor.com/api/projects/status/7rb3wvpe06sk3ihp?svg=true)](https://ci.appveyor.com/project/lework/redisdesktopmanager-windows)
[![GitHub All Releases](https://img.shields.io/github/downloads/lework/RedisDesktopManager-Windows/total?style=flat-square&logo=github)](https://github.com/lework/RedisDesktopManager-Windows/releases)
[![GitHub tag (latest SemVer)](https://img.shields.io/github/tag/lework/RedisDesktopManager-Windows?style=flat-square&logo=github)](https://github.com/lework/RedisDesktopManager-Windows/tags)
[![GitHub stars](https://img.shields.io/github/stars/lework/RedisDesktopManager-Windows?style=flat-square&logo=github)](https://github.com/lework/RedisDesktopManager-Windows/stargazers)
[![Project license](https://img.shields.io/github/license/lework/RedisDesktopManager-Windows?style=flat-square&logo=github)](https://github.com/lework/RedisDesktopManager-Windows/blob/master/LICENSE)

RedisDesktopManager Windows版本

为了方便国内技术人员不方便以美元购买 [订阅](https://redisdesktop.com/pricing) 才开设的本仓库。如果在条件允许的情况下，衷心的希望购买 [订阅](https://redisdesktop.com/pricing) 支持下作者，在这里也非常感谢作者开源 [RedisDesktopManager](https://github.com/uglide/RedisDesktopManager)。

目前国内可以通过`微信`支付购买 [redisdesktop.com](https://redisdesktop.com/) 上的订阅，每次的购买都会有助于作者 [uglide](https://github.com/uglide) 推动RDM向前发展。

## 安装使用

通过本仓库的 [releases](https://github.com/lework/RedisDesktopManager-Windows/releases) 页面下载`redis-desktop-manager-x.zip`文件， 解压后运行其中 `redis-desktop-manager-x.exe`文件, 就可以安装 RedisDesktopManager 。 目前只支持x64平台。

## Faq

1. 程序启动出现 `0xc000007b` 错误。
   
    下载运行 [vc_redist.x64](https://aka.ms/vs/15/release/vc_redist.x64.exe) 点击修复选项。
2. 由于找不到 `python37.dll`。

    下载 [python37-deps.zip](https://github.com/lework/RedisDesktopManager-Windows/blob/779ac84cbcad3f5497dd5a87f2c8e9aa93457026/python37-deps.zip?raw=true), 解压到RedisDesktopManager安装目录中。