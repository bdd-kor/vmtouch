# vmtouch - the Virtual Memory Toucher

[![Build Status](https://travis-ci.org/hoytech/vmtouch.svg?branch=master)](https://travis-ci.org/hoytech/vmtouch)


## Portable file system cache diagnostics and control


vmtouch is a tool for learning about and controlling the file system cache of unix and unix-like systems. It is BSD licensed so you can basically do whatever you want with it.


### Quick install guide:

    $ git clone https://github.com/hoytech/vmtouch.git
    $ cd vmtouch
    $ make
    $ sudo make install

### Quick install guide:

    Enter ./test to start the test program.
    
    You can choose one of three tests.
    
    Test 1 tells you how long it takes to read the file line by line without printing the contents of the file.
    Test 2 prints the contents of the file.
    Test 3 prints out the contents of the file, including the functions of 1 and 2, 
    and tells you how long it takes to read the file line by line at the same time.


### More information

* [Official Website](https://hoytech.com/vmtouch/)
* [Online manual](https://github.com/hoytech/vmtouch/blob/master/vmtouch.pod)
* [System tuning parameters](https://github.com/hoytech/vmtouch/blob/master/TUNING.md)


### Support

To complement the open source community, Hoytech offers services related to vmtouch:

* Advanced feature development
* Support contracts
* Training sessions

Please <a href="mailto:doug@hoytech.com?subject=vmtouch support">contact Doug Hoyte</a> for more information.


### Authors

vmtouch is copyright (c) 2009-2017 Doug Hoyte and contributors.
