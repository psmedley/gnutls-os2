/* coff2os2.cmd */
/* version history */
/* version 0.1.0 from 2020-03-31 first edition (sed part borrowed from Ko Mung-Hun) */

version = '0.1.0'
version_date = '2020-03-31'

'@echo off'

ok = SysFileTree('coff\*x86.s', rm.,'FOS')
do i = 1 to rm.0

fileName = 'os2\' || filespec('N',rm.i)

'cat ' rm.i '|',
'sed -e "s/^\([ 	]*\).align\([ 	]*\)2\([ 	]*.*\)/\1.align\21\3/g"',
    '-e "s/^\([ 	]*\).align\([ 	]*\)4\([ 	]*.*\)/\1.align\22\3/g"',
    '-e "s/^\([ 	]*\).align\([ 	]*\)8\([ 	]*.*\)/\1.align\23\3/g"',
    '-e "s/^\([ 	]*\).align\([ 	]*\)16\([ 	]*.*\)/\1.align\24\3/g"',
    '-e "s/^\([ 	]*\).align\([ 	]*\)32\([ 	]*.*\)/\1.align\25\3/g"',
    '-e "s/^\([ 	]*\).align\([ 	]*\)64\([ 	]*.*\)/\1.align\26\3/g"',
    '-e "s/^\([ 	]*\).align\([ 	]*\)128\([ 	]*.*\)/\1.align\27\3/g"',
    '-e "s/^\([ 	]*\).align\([ 	]*\)256\([ 	]*.*\)/\1.align\28\3/g"',
    '-e "s/^\([ 	]*\).align\([ 	]*\)512\([ 	]*.*\)/\1.align\29\3/g"',
    '-e "/^[ 	]*\.def[ 	]*.*;[ 	]*\.scl[ 	]*[0-9][0-9]*;[ 	]*\.type[ 	]*[0-9][0-9]*;[ 	]*\.endef[ 	]*.*$/d"',
    '| tr -d "\r" > ' filename;

end

exit 0;
