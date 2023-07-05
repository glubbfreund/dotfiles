#!/bin/bash
~/.fehbg &
cp ~/.config/xfce4/xfconf/xfce-perchannel-xml/xfce4-notifyd.xml.dwm ~/.config/xfce4/xfconf/xfce-perchannel-xml/xfce4-notifyd.xml 
/usr/libexec/xfce4/notifyd/xfce4-notifyd &
picom -b &
~/Src/dwm/scripts/sched &
~/Dev/bash/weather &
~/Dev/bash/radio &
nm-applet &
udiskie -t &
xfce4-power-manager &
blueman-applet &
setxkbmap -layout de,gr -option caps:escape
xrandr --auto --output DP-2 --mode 1920x1080 --right-of DP-0
