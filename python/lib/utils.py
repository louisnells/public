#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#===============================================================================
#
#   Copyright (c) 2015-2018
#       Nells.K.S <https://google.com/+NellsKS>
#
#   All rights reserved.
#
#===============================================================================


import inspect
from pprint import pformat
import json, yaml


__func__	= lambda level = 0: (
	inspect.stack ()[level + 1][3]
)

def __func_args__ (level = 0):
	stack = inspect.stack ()
	args_info = inspect.getargvalues (stack[level + 1][0])
	
	args = {}
	args.update ({s_arg: args_info.locals[s_arg] for s_arg in args_info.args})
	args.update ({args_info.varargs: args_info.locals[args_info.varargs]} if args_info.varargs else {})
	args.update (args_info.locals[args_info.keywords] if args_info.keywords else {})
	
	return args

DUMP_JSON	= lambda obj: (
	json.dumps (obj, skipkeys = True, sort_keys = True, indent = 4, separators = (', ', ': '))
)
DUMP_PYTH	= lambda obj: (
	pformat (obj, indent = 4, compact = True)
)
DUMP_YAML	= lambda obj: (
	yaml.safe_dump (obj, indent = 4, default_flow_style = False)
)
