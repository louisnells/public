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

o_tpl_fd = open ('git_log.tpl')
o_txt_fd = open ('git_log.txt')

o_tpl_rex = textfsm.TextFSM (o_tpl_fd)
l_data = o_tpl_rex.ParseText (o_txt_fd.read ())

print (o_tpl_rex.header)
for l_entry in l_data:
	print (l_entry)
