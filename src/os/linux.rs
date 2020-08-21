use libc::{c_int, c_uint};

// termios
pub const TCGETA: c_uint = 0x5401;
pub const TCSETA: c_uint = 0x5402;
pub const TCSETAW: c_uint = 0x5403;
pub const TCSETAF: c_uint = 0x5404;

pub const TCSBRK: c_uint = 0x5405;
pub const TCXONC: c_uint = 0x5406;
pub const TCFLSH: c_uint = 0x5407;

pub const TCGETS: c_uint = 0x540d;
pub const TCSETS: c_uint = 0x540e;
pub const TCSETSW: c_uint = 0x540f;
pub const TCSETSF: c_uint = 0x5410;

pub const TIOCEXCL: c_uint = 0x740d;	/* set exclusive use of tty */
pub const TIOCNXCL: c_uint = 0x740e;	/* reset exclusive use of tty */
pub const TIOCOUTQ: c_uint = 0x7472;	/* output queue size */
pub const TIOCSTI: c_uint = 0x5472;	/* simulate terminal input */
pub const TIOCMGET: c_uint = 0x741d;	/* get all modem bits */
pub const TIOCMBIS: c_uint = 0x741b;	/* bis modem bits */
pub const TIOCMBIC: c_uint = 0x741c;	/* bic modem bits */
pub const TIOCMSET: c_uint = 0x741a;	/* set all modem bits */
pub const TIOCPKT: c_uint = 0x5470;	/* pty: set/clear packet mode */
pub const  TIOCPKT_DATA: c_uint = 0x00;	/* data packet */
pub const  TIOCPKT_FLUSHREAD: c_uint = 0x01;	/* flush packet */
pub const  TIOCPKT_FLUSHWRITE: c_uint = 0x02;	/* flush packet */
pub const  TIOCPKT_STOP: c_uint = 0x04;	/* stop output */
pub const  TIOCPKT_START: c_uint = 0x08;	/* start output */
pub const  TIOCPKT_NOSTOP: c_uint = 0x10;	/* no more ^S, ^Q */
pub const  TIOCPKT_DOSTOP: c_uint = 0x20;	/* now do ^S ^Q */
pub const  TIOCPKT_IOCTL: c_uint = 0x40;	/* state change of pty driver */
pub const TIOCSWINSZ: c_uint = 0x80087467;	/* set window size */
pub const TIOCGWINSZ: c_uint = 0x40087468;	/* get window size */
pub const TIOCNOTTY: c_uint = 0x5471;	/* void tty association */
pub const TIOCSETD: c_uint = 0x7401;
pub const TIOCGETD: c_uint = 0x7400;

pub const FIOCLEX: c_uint = 0x6601;
pub const FIONCLEX: c_uint = 0x6602;
pub const FIOASYNC: c_uint = 0x667d;
pub const FIONBIO: c_uint = 0x667e;
pub const FIOQSIZE: c_uint = 0x667f;

pub const TIOCGLTC: c_uint = 0x7474;	/* get special local chars */
pub const TIOCSLTC: c_uint = 0x7475;	/* set special local chars */
pub const TIOCSPGRP: c_uint = 0x80047476;	/* set pgrp of tty */
pub const TIOCGPGRP: c_uint = 0x40047477;	/* get pgrp of tty */
pub const TIOCCONS: c_uint = 0x80047478;	/* become virtual console */

pub const FIONREAD: c_uint = 0x467f;
pub const TIOCINQ: c_uint = 0x467f;

pub const TIOCGETP: c_uint = 0x7408;
pub const TIOCSETP: c_uint = 0x7409;
pub const TIOCSETN: c_uint = 0x740a;	/* TIOCSETP wo flush */

pub const TIOCSBRK: c_uint = 0x5427;	/* BSD compatibility */
pub const TIOCCBRK: c_uint = 0x5428;	/* BSD compatibility */
pub const TIOCGSID: c_uint = 0x7416;	/* Return the session ID of FD */
pub const TCGETS2: c_uint = 0x4030542a;
pub const TCSETS2: c_uint = 0x8030542b;
pub const TCSETSW2: c_uint = 0x8030542c;
pub const TCSETSF2: c_uint = 0x8030542d;
pub const TIOCGPTN: c_uint = 0x40045430;	/* Get Pty Number (of pty-mux device) */
pub const TIOCSPTLCK: c_uint = 0x80045431;	/* Lock/unlock Pty */
pub const TIOCGDEV: c_uint = 0x40045432;	/* Get primary device node of /dev/console */
pub const TIOCSIG: c_uint = 0x80045436;	/* Generate signal on Pty slave */
pub const TIOCVHANGUP: c_uint = 0x5437;
pub const TIOCGPKT: c_uint = 0x40045438;	/* Get packet mode state */
pub const TIOCGPTLCK: c_uint = 0x40045439;	/* Get Pty lock state */
pub const TIOCGEXCL: c_uint = 0x40045440;	/* Get exclusive mode state */

pub const TIOCSCTTY: c_uint = 0x5480;	/* become controlling tty */
pub const TIOCGSOFTCAR: c_uint = 0x5481;
pub const TIOCSSOFTCAR: c_uint = 0x5482;
pub const TIOCLINUX: c_uint = 0x5483;
pub const TIOCGSERIAL: c_uint = 0x5484;
pub const TIOCSSERIAL: c_uint = 0x5485;
pub const TCSBRKP: c_uint = 0x5486;	/* Needed for POSIX tcsendbreak() */
pub const TIOCSERCONFIG: c_uint = 0x5488;
pub const TIOCSERGWILD: c_uint = 0x5489;
pub const TIOCSERSWILD: c_uint = 0x548a;
pub const TIOCGLCKTRMIOS: c_uint = 0x548b;
pub const TIOCSLCKTRMIOS: c_uint = 0x548c;
pub const TIOCSERGSTRUCT: c_uint = 0x548d; /* For debugging only */
pub const TIOCSERGETLSR: c_uint = 0x548e; /* Get line status register */
pub const TIOCSERGETMULTI: c_uint = 0x548f; /* Get multiport config*/
pub const TIOCSERSETMULTI: c_uint = 0x5490; /* Set multiport config */
pub const TIOCMIWAIT: c_uint = 0x5491; /* wait for a change on serial input line(s) */
pub const TIOCGICOUNT: c_uint = 0x5492; /* read serial port __inline__ interrupt counts */

// modem control lines

pub const TIOCM_LE: c_int = 0x1;
pub const TIOCM_DTR: c_int = 0x2;
pub const TIOCM_RTS: c_int = 0x4;
pub const TIOCM_ST: c_int = 0x10;
pub const TIOCM_SR: c_int = 0x20;
pub const TIOCM_CTS: c_int = 0x40;
pub const TIOCM_CAR: c_int = 0x100;
pub const TIOCM_CD: c_int = 0x100;
pub const TIOCM_RNG: c_int = 0x200;
pub const TIOCM_RI: c_int = 0x200;
pub const TIOCM_DSR: c_int = 0x400;

extern "C" {
    pub fn ioctl(fd: c_int, request: c_uint, ...) -> c_int;
}
