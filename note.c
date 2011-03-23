# VIM                      markdown(笔记格式) 
:h (帮助) 
:wq(保存)
:w__ 加文件名__.c_可直接创建文件_
:q!(不保存退出)
vimtutor   进入vim的帮助学习
cp(复制) aa 复制成bb
## vim（执行） 也可用作创建文件* .c  touch(创建) 
  chmod(修改)   chmod +x   可执行权限
mkdir(创建文件夹)  touch(创建文件) 
mv(为文件或目录改名，或将文件由一个目录移入另一个目录中) 文件名 ..   移动到上一个文件夹
man  （帮助）     
cd cd~ cd ../.. cd home/xwp/  几种跳转方式
### pkg 
   sudo apt-get install git-core
   wget 122.115.61.189/tmp/cc-note
http://happypeter.github.com/lgcb（peter的网站）
/bin__ 安装目录__  把所要安装的文件chmod +x  mv 到 /bin 下面
#### these;
     vim xx.md
     markdown xx.md > xx.html
     firefox xx.html
## tig				     
      ./configure
      make
      sudo make install
      history
### diff 
      diff -u 原文件 更新文件 >补丁名.diff
      patch 原文件+更新的diff  可直接更新		
#### git 
     git init 先建立一个git仓库
     git add +需要跟踪的文件名
     git commit -a -m "first version"创建一个版本
    __ 以后每次更新都创建一个版本 输入tig 可以查看版本号做需要的修改__ 
