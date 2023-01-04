#Include <data\debug>
#Include <numahk\numahk>

a := numahk.array([1,2,3,4,5,6], numahk.float64).reshape(2,3)
debug a
debug numahk.mean(a, axis:=1)