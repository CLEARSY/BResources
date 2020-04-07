MACHINE
    LIB
SEES CTX
OPERATIONS
    vv <-- lib_next(p1) =
    PRE p1 : STATUS THEN
        vv : (vv : STATUS & not(vv = p1))
    END
END
