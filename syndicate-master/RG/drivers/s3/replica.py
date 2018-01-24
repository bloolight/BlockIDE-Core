#!/usr/bin/python

"""
   Copyright 2013 The Trustees of Princeton University

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
"""

def replica_read( context, request_info, filename, outfile ):
   return context.drivers['builtin'].read_file( filename, outfile, context=context )

def replica_write( context, request_info, filename, infile ):
   return context.drivers['builtin'].write_file( filename, infile, context=context )

def replica_delete( context, request_info, filename ):
   return context.drivers['builtin'].delete_file( filename, context=context )


