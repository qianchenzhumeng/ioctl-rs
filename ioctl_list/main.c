#include <stdio.h>
#include <asm/ioctls.h>
#include <asm/termbits.h>
#include <asm/termios.h>

int main()
{
    printf("// termios\n");
    printf("\n");
    printf("pub const TCGETA: c_uint = 0x%x;\n", TCGETA);
    printf("pub const TCSETA: c_uint = 0x%x;\n", TCSETA);
    printf("pub const TCSETAW: c_uint = 0x%x;\n", TCSETAW);
    printf("pub const TCSETAF: c_uint = 0x%x;\n", TCSETAF);
    printf("\n");
    printf("pub const TCSBRK: c_uint = 0x%x;\n", TCSBRK);
    printf("pub const TCXONC: c_uint = 0x%x;\n", TCXONC);
    printf("pub const TCFLSH: c_uint = 0x%x;\n", TCFLSH);
    printf("\n");
    printf("pub const TCGETS: c_uint = 0x%x;\n", TCGETS);
    printf("pub const TCSETS: c_uint = 0x%x;\n", TCSETS);
    printf("pub const TCSETSW: c_uint = 0x%x;\n", TCSETSW);
    printf("pub const TCSETSF: c_uint = 0x%x;\n", TCSETSF);
    printf("\n");
    printf("pub const TIOCEXCL: c_uint = 0x%x;\n", TIOCEXCL);	/* set exclusive use of tty */
    printf("pub const TIOCNXCL: c_uint = 0x%x;\n", TIOCNXCL);	/* reset exclusive use of tty */
    printf("pub const TIOCOUTQ: c_uint = 0x%x;\n", TIOCOUTQ);	/* output queue size */
    printf("pub const TIOCSTI: c_uint = 0x%x;\n", TIOCSTI);	/* simulate terminal input */
    printf("pub const TIOCMGET: c_uint = 0x%x;\n", TIOCMGET);	/* get all modem bits */
    printf("pub const TIOCMBIS: c_uint = 0x%x;\n", TIOCMBIS);	/* bis modem bits */
    printf("pub const TIOCMBIC: c_uint = 0x%x;\n", TIOCMBIC);	/* bic modem bits */
    printf("pub const TIOCMSET: c_uint = 0x%x;\n", TIOCMSET);	/* set all modem bits */
    printf("pub const TIOCPKT: c_uint = 0x%x;\n", TIOCPKT);	/* pty: set/clear packet mode */
    printf("pub const  TIOCPKT_DATA: c_uint = 0x%x;\n", TIOCPKT_DATA);	/* data packet */
    printf("pub const  TIOCPKT_FLUSHREAD: c_uint = 0x%x;\n", TIOCPKT_FLUSHREAD);	/* flush packet */
    printf("pub const  TIOCPKT_FLUSHWRITE: c_uint = 0x%x;\n", TIOCPKT_FLUSHWRITE);	/* flush packet */
    printf("pub const  TIOCPKT_STOP: c_uint = 0x%x;\n", TIOCPKT_STOP);	/* stop output */
    printf("pub const  TIOCPKT_START: c_uint = 0x%x;\n", TIOCPKT_START);	/* start output */
    printf("pub const  TIOCPKT_NOSTOP: c_uint = 0x%x;\n", TIOCPKT_NOSTOP);	/* no more ^S, ^Q */
    printf("pub const  TIOCPKT_DOSTOP: c_uint = 0x%x;\n", TIOCPKT_DOSTOP);	/* now do ^S ^Q */
    printf("pub const  TIOCPKT_IOCTL: c_uint = 0x%x;\n", TIOCPKT_IOCTL);	/* state change of pty driver */
    printf("pub const TIOCSWINSZ: c_uint = 0x%x;\n", TIOCSWINSZ);	/* set window size */
    printf("pub const TIOCGWINSZ: c_uint = 0x%x;\n", TIOCGWINSZ);	/* get window size */
    printf("pub const TIOCNOTTY: c_uint = 0x%x;\n", TIOCNOTTY);	/* void tty association */
    printf("pub const TIOCSETD: c_uint = 0x%x;\n", TIOCSETD);
    printf("pub const TIOCGETD: c_uint = 0x%x;\n", TIOCGETD);
    printf("\n");
    printf("pub const FIOCLEX: c_uint = 0x%x;\n", FIOCLEX);
    printf("pub const FIONCLEX: c_uint = 0x%x;\n", FIONCLEX);
    printf("pub const FIOASYNC: c_uint = 0x%x;\n", FIOASYNC);
    printf("pub const FIONBIO: c_uint = 0x%x;\n", FIONBIO);
    printf("pub const FIOQSIZE: c_uint = 0x%x;\n", FIOQSIZE);
    printf("\n");
    printf("pub const TIOCGLTC: c_uint = 0x%x;\n", TIOCGLTC);	/* get special local chars */
    printf("pub const TIOCSLTC: c_uint = 0x%x;\n", TIOCSLTC);	/* set special local chars */
    printf("pub const TIOCSPGRP: c_uint = 0x%x;\n", TIOCSPGRP);	/* set pgrp of tty */
    printf("pub const TIOCGPGRP: c_uint = 0x%x;\n", TIOCGPGRP);	/* get pgrp of tty */
    printf("pub const TIOCCONS: c_uint = 0x%x;\n", TIOCCONS);	/* become virtual console */
    printf("\n");
    printf("pub const FIONREAD: c_uint = 0x%x;\n", FIONREAD);
    printf("pub const TIOCINQ: c_uint = 0x%x;\n", TIOCINQ);
    printf("\n");
    printf("pub const TIOCGETP: c_uint = 0x%x;\n", TIOCGETP);
    printf("pub const TIOCSETP: c_uint = 0x%x;\n", TIOCSETP);
    printf("pub const TIOCSETN: c_uint = 0x%x;\n", TIOCSETN);	/* TIOCSETP wo flush */
    printf("\n");
    printf("pub const TIOCSBRK: c_uint = 0x%x;\n", TIOCSBRK);	/* BSD compatibility */
    printf("pub const TIOCCBRK: c_uint = 0x%x;\n", TIOCCBRK);	/* BSD compatibility */
    printf("pub const TIOCGSID: c_uint = 0x%x;\n", TIOCGSID);	/* Return the session ID of FD */
    printf("pub const TCGETS2: c_uint = 0x%x;\n", TCGETS2);
    printf("pub const TCSETS2: c_uint = 0x%x;\n", TCSETS2);
    printf("pub const TCSETSW2: c_uint = 0x%x;\n", TCSETSW2);
    printf("pub const TCSETSF2: c_uint = 0x%x;\n", TCSETSF2);
    printf("pub const TIOCGPTN: c_uint = 0x%x;\n", TIOCGPTN);	/* Get Pty Number (of pty-mux device) */
    printf("pub const TIOCSPTLCK: c_uint = 0x%x;\n", TIOCSPTLCK);	/* Lock/unlock Pty */
    printf("pub const TIOCGDEV: c_uint = 0x%x;\n", TIOCGDEV);	/* Get primary device node of /dev/console */
    printf("pub const TIOCSIG: c_uint = 0x%x;\n", TIOCSIG);	/* Generate signal on Pty slave */
    printf("pub const TIOCVHANGUP: c_uint = 0x%x;\n", TIOCVHANGUP);
    printf("pub const TIOCGPKT: c_uint = 0x%x;\n", TIOCGPKT);	/* Get packet mode state */
    printf("pub const TIOCGPTLCK: c_uint = 0x%x;\n", TIOCGPTLCK);	/* Get Pty lock state */
    printf("pub const TIOCGEXCL: c_uint = 0x%x;\n", TIOCGEXCL);	/* Get exclusive mode state */
    printf("\n");
    printf("pub const TIOCSCTTY: c_uint = 0x%x;\n", TIOCSCTTY);	/* become controlling tty */
    printf("pub const TIOCGSOFTCAR: c_uint = 0x%x;\n", TIOCGSOFTCAR);
    printf("pub const TIOCSSOFTCAR: c_uint = 0x%x;\n", TIOCSSOFTCAR);
    printf("pub const TIOCLINUX: c_uint = 0x%x;\n", TIOCLINUX);
    printf("pub const TIOCGSERIAL: c_uint = 0x%x;\n", TIOCGSERIAL);
    printf("pub const TIOCSSERIAL: c_uint = 0x%x;\n", TIOCSSERIAL);
    printf("pub const TCSBRKP: c_uint = 0x%x;\n", TCSBRKP);	/* Needed for POSIX tcsendbreak() */
    printf("pub const TIOCSERCONFIG: c_uint = 0x%x;\n", TIOCSERCONFIG);
    printf("pub const TIOCSERGWILD: c_uint = 0x%x;\n", TIOCSERGWILD);
    printf("pub const TIOCSERSWILD: c_uint = 0x%x;\n", TIOCSERSWILD);
    printf("pub const TIOCGLCKTRMIOS: c_uint = 0x%x;\n", TIOCGLCKTRMIOS);
    printf("pub const TIOCSLCKTRMIOS: c_uint = 0x%x;\n", TIOCSLCKTRMIOS);
    printf("pub const TIOCSERGSTRUCT: c_uint = 0x%x;\n", TIOCSERGSTRUCT); /* For debugging only */
    printf("pub const TIOCSERGETLSR: c_uint = 0x%x;\n", TIOCSERGETLSR); /* Get line status register */
    printf("pub const TIOCSERGETMULTI: c_uint = 0x%x;\n", TIOCSERGETMULTI); /* Get multiport config*/
    printf("pub const TIOCSERSETMULTI: c_uint = 0x%x;\n", TIOCSERSETMULTI); /* Set multiport config */
    printf("pub const TIOCMIWAIT: c_uint = 0x%x;\n", TIOCMIWAIT); /* wait for a change on serial input line(s) */
    printf("pub const TIOCGICOUNT: c_uint = 0x%x;\n", TIOCGICOUNT); /* read serial port __inline__ interrupt counts */


    printf("\n");
    printf("// modem control lines\n");
    printf("\n");
    printf("pub const TIOCM_LE: c_uint = 0x%x;\n", TIOCM_LE);
    printf("pub const TIOCM_DTR: c_uint = 0x%x;\n", TIOCM_DTR);
    printf("pub const TIOCM_RTS: c_uint = 0x%x;\n", TIOCM_RTS);
    printf("pub const TIOCM_ST: c_uint = 0x%x;\n", TIOCM_ST);
    printf("pub const TIOCM_SR: c_uint = 0x%x;\n", TIOCM_SR);
    printf("pub const TIOCM_CTS: c_uint = 0x%x;\n", TIOCM_CTS);
    printf("pub const TIOCM_CAR: c_uint = 0x%x;\n", TIOCM_CAR);
    printf("pub const TIOCM_CD: c_uint = 0x%x;\n", TIOCM_CD);
    printf("pub const TIOCM_RNG: c_uint = 0x%x;\n", TIOCM_RNG);
    printf("pub const TIOCM_RI: c_uint = 0x%x;\n", TIOCM_RI);
    printf("pub const TIOCM_DSR: c_uint = 0x%x;\n", TIOCM_DSR);
}
