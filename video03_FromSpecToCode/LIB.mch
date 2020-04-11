MACHINE
    LIB
SEES CTX
OPERATIONS
    vv <-- LIB_next(p1) =
    PRE p1: STATUS THEN
        vv :: NEXT[{p1}]
    END
END
