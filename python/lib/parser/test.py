#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#===============================================================================
#   Copyright (c) 2015-2018
#       Nells.K.S <https://google.com/+NellsKS>
#
#   All rights reserved.
#===============================================================================

# $ python3 ../textfsm.py git_log.tpl git_log.txt

import textfsm

oTplFd = open ('git_log.tpl')
oTxtFd = open ('git_log.txt')

oTplRex = textfsm.TextFSM (oTplFd)
lData = oTplRex.ParseText (oTxtFd.read ())

print (oTplRex.header)
for lEntry in lData:
	print (lEntry)
