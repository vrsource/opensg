# PyOpenSG is (C) Copyright 2005-2009 by Allen Bierbaum
#
# This file is part of PyOpenSG.
#
# PyOpenSG is free software; you can redistribute it and/or modify it under
# the terms of the GNU Lesser General Public License as published by the Free
# Software Foundation; either version 2 of the License, or (at your option)
# any later version.
#
# PyOpenSG is distributed in the hope that it will be useful, but WITHOUT ANY
# WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
# FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
# more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

# Helper class

import osg2

class PrintTreeTraverser(object):
   def __init__(self):
      self.depth = 0

   def traverse(self, node):
      return osg2.osg.traverse(node, self.enter, self.exit)

   def enter(self, node):
      core = node.getCore()      
      print("  "*self.depth, "Enter: %s [%s]"%(osg2.osg.getName(node),core))
      self.depth += 1
      return osg2.osg.Action.Continue

   def exit(self, node, result):
      self.depth -= 1
      core = node.getCore()
      print("  "*self.depth, "Exit: %s [%s]"%(osg2.osg.getName(node),core))
      return result
