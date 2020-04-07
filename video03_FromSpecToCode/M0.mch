MACHINE
    M0
SEES CTX
VARIABLES
    status
INVARIANT
    status : STATUS
INITIALISATION
    status := S0
OPERATIONS
    operate =
    BEGIN
        status :(status : STATUS & not(status = status$0))
    END
END
