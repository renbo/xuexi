# VIM                      markdown(笔记格式)   
:h "帮助"
:wq"保存"
:w_加文件名_.c    
:q!"不保存退出"
vimtutor   进入vim的帮助学习
cp"复制" aa 复制成bb
## vim"执行" 也可用作创建文件* .c   
  chmod"修改"   chmod +x   可执行权限
mkdir"创建文件夹"  touch"创建文件" 
mv"为文件或目录改名，或将文件由一个目录移入另一个目录中" 文件名 ..   移动到上一个文件夹
man  "帮助"     
cd cd~ cd ../.. cd home/xwp/  几种跳转方式
### pkg 
    sudo apt-get install git-core
    wget 122.115.61.189/tmp/cc-note
http://happypeter.github.com/lgcb（peter的网站）
/bin__安装目录__把所要安装的文件chmod +x  mv 到 /bin 下面
### these;
     vim xx.md
     markdown xx.md > xx.html
     firefox xx.html
## tig
      后缀名为.gz的解压方式    后缀名为zip  直接unzip即可
      tar zxvf 加要解压的文件名
      ./configure
      make
      sudo make install
      history
### diff 
      diff -u 原文件 更新文件 >补丁名.diff
      patch 原文件+更新的diff  可直接更新		
### git
     git init 先建立一个git仓库
     git add +需要跟踪的文件名
     git commit -a -m "first version"创建一个版本
    __以后每次更新都创建一个版本 输入tig 可以查看版本号做需要的修改__
     git commit -a -m  ==  git ci
     git throw 还原回上次记录
     git throwh 删除第一个版本或者说补丁
     A移动到最后一位插入  I移动到第一位插入
     a移动到光标后一位插入 i移动到光标前一位插入
     o移动到下一行的第一位 O移动到当前行的第一位			
     G移动到末尾    y拷贝 yy拷贝一行    p粘贴  dd删除
     git的配置文件     .gitconfig
[user]
name = Peter Wang
email = happypeter1983@gmail.com
[core]
editor = vim
[alias]
ci = commit -a -v
co = checkout
st = status
br = branch
throw = reset --hard HEAD
throwh = reset --hard HEAD^
[color]
ui = true
[commit]
template = ./.commit-template
[push]
default = current

##  在home下 建立vim的配置文件  vim .vimrc
    :set nu "显示行号"
     set autoindent
###  script"脚本"
     脚本语言是解释性语言
     sudo apt-get install ctags
     ctags "标签 "
     ctags+后缀为.c的文件 作用是编程C时的一种快捷查找补齐的插件
### 编辑vim的快捷键
    进入.vim下的snippets的c.snippets
    先＃***做个快捷键的说明
    snippets 快捷键
     Tab   快捷键全名
##  写代码的快捷键     
     ctrl+n 自动补齐  ctrl+]  ctrl+o在命令界面下查看函数定义
     插入模式下 ctrl+x+l 补齐全行  ctrl+x+k 补齐任意英文单词
     ctrl+x+f 
     set spell查错     /,ss                         branch=br 
     git checkout+版本号-b tmp 给当前版本做个分支tmp  git branch查看分支
     git branch -D tmp 删除分支tmp
## 查找文件
    locate+文件名 不能查找刚创建的文件  updatedb更新locate库
    find .|grep 要查找的文件
##  关闭死锁的进程
    ps 显示当前进程  ps aux 显示所有进程
    ps aux|grep -i+名  意思是查找所有的进程名
    kill -9 +进程号  强制杀死死锁的进程
### bash脚本  写bash脚本最重要的是空格
    echo输出的意思跟printf一个意思
    vim file.sh        输出hello  echo hello
    chmod +x flie.sh   变成可执行文件
    ./file.sh 执行
    hello        (最简单的bash编写)
    `ls`的意思是查看当前目录下所有文件
    ldd 
    sudo apt-get install libc6-dev
    vimdiff 文件名 文件名 比较两个文件的不同
    ctrl+v 可视块 zf 建立一个折叠 zx 打开折叠 zc 回到折叠状态
