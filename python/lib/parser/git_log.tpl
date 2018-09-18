#
#   Copyright (c) 2015-2018
#       Nells.K.S <https://google.com/+NellsKS>
#
#   All rights reserved.
#
Value Required hash ([\da-f]+)
Value parent1 ([\da-f]+)
Value parent2 ([\da-f]+)
Value author ([^\Z]+)
Value timestamp ([^\Z]+)
Value message ([^\Z]+)
Value List files ([^\Z]+)

Start
  ^commit\s+ -> Continue.Record
  ^commit\s+${hash}
  ^Merge:\s+${parent1} ${parent2}
  ^Author:\s+${author}
  ^Date:\s+${timestamp}
  ^\s+${message}
  ^(?=\S)${files}
