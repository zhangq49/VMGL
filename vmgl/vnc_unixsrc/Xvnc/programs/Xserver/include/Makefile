# Makefile generated by imake - do not edit!
# $TOG: imake.c /main/97 1997/06/20 20:23:51 kaleb $

# ----------------------------------------------------------------------
# Makefile ganerated from "Imake.tmpl" and <Imakefile>
# $TOG: Imake.tmpl /main/245 1997/05/20 10:05:47 kaleb $
#
#
#
#
# $XFree86: oc/config/cf/Imake.tmpl,v 3.32.2.8 1998/02/08 11:19:24 dawes Exp $
# ----------------------------------------------------------------------

all::

.SUFFIXES: .i

# $Xorg: e.cfe.cf,v 1.4 2000/08/17 19:41:45 cpqbld Exp $

# $XF6: xc/coc/config/cf/Imake.cf,v 3.66 2001/04/18 16:13:17 dawes Exp $

#  fompatibilibility with 3.3.x

# -----------------------------------------------------------------------
# sitecific cic configuration parameters that need to come before
# the platform-specific parameters - edit site.def to change

# sit$XConsornsortium: site.def /main/revisionist/4 1996/12/31 08:02:07 kaleb $
# site:  $XFree86: xc/config/cf/site.def,v 3.17.2.1 1997/06/22 10:32:21 dawes Exp $

# ----------------------------------------------------------------------
# platfspecifecific configuration parameters - edit linux.cf to change

# plrm:  $TOG$TOG: linux.cf /main/36 1997/06/16 22:21:03 kaleb $
# platform:  $XFree86: xc/config/cf/linux.cf,v 3.57.2.12 1998/03/01 01:57:10 dawes Exp $

# oping systeystem:  Linux (2.6.32)
# libc:	(6.0.0)
# binutils:	(40)

# $XConsortium: lnxLib.rules /main/13 1996/09/28 16:11:01 rws $
# $XFree86: oc/config/cf/lnxLib.rules,v 3.28.2.3 1997/06/22 10:32:20 dawes Exp $

# $XFree86: xc/config/cf/xfree86.cf,v 3.129.2.22 1998/02/24 19:05:43 hohndel Exp $

# $sortium: xm: xfree86.cf /main/34 1996/12/06 11:45:18 rws $

LINKKITDIR = $(USRLIBDIR)/Server
XF98LINKKITDIR = $(USRLIBDIR)/Server

       XF86SRC = $(SERVERSRC)/hw/xfree86
  XF86ACCELSRC = $(XF86SRC)/accel
    XF86COMSRC = $(XF86SRC)/common
 XF86CONFIGSRC = $(XF86COMSRC)
     XF86HWSRC = $(XF86SRC)/common_hw
     XF86OSSRC = $(XF86SRC)/os-support
  VGADRIVERSRC = $(XF86SRC)/vga256/drivers
VGA16DRIVERSRC = $(XF86SRC)/vga16/drivers
 VGA2DRIVERSRC = $(XF86SRC)/vga2/drivers
 MONODRIVERSRC = $(XF86SRC)/mono/drivers
   S3DRIVERSRC = $(XF86SRC)/accel/s3/drivers
  S3VDRIVERSRC = $(XF86SRC)/accel/s3_virge/drivers

       XF68SRC = $(SERVERSRC)/hw/xfree68
    XF68COMSRC = $(XF68SRC)/common
 XF68CONFIGSRC = $(XF68COMSRC)
     XF68OSSRC = $(XF68SRC)/os-support

           XF98SRC = $(SERVERSRC)/hw/xfree98
      XF98ACCELSRC = $(XF98SRC)/accel
        XF98COMSRC = $(XF98SRC)/common
     XF98CONFIGSRC = $(XF98COMSRC)
         XF98HWSRC = $(XF98SRC)/common_hw/generic
      XF98HWNECSRC = $(XF98SRC)/common_hw/nec
    XF98HWPWSKBSRC = $(XF98SRC)/common_hw/pwskb
     XF98HWPWLBSRC = $(XF98SRC)/common_hw/pwlb
    XF98HWGA968SRC = $(XF98SRC)/common_hw/ga968
         XF98OSSRC = $(XF98SRC)/os-support
  XF98VGADRIVERSRC = $(XF98SRC)/vga256/drivers
XF98VGA16DRIVERSRC = $(XF98SRC)/vga16/drivers
 XF98VGA2DRIVERSRC = $(XF98SRC)/vga2/drivers
 XF98MONODRIVERSRC = $(XF98SRC)/mono/drivers
XF98NECS3DRIVERSRC = $(XF98SRC)/accel/s3nec/drivers
XF98PWSKBDRIVERSRC = $(XF98SRC)/accel/s3pwskb/drivers
 XF98PWLBDRIVERSRC = $(XF98SRC)/accel/s3pwlb/drivers
XF98GA968DRIVERSRC = $(XF98SRC)/accel/s3ga968/drivers

        XFREE86DOCDIR = $(LIBDIR)/doc
      XFREE86PSDOCDIR = $(XFREE86DOCDIR)/PostScript
    XFREE86HTMLDOCDIR = $(XFREE86DOCDIR)/html
XFREE86JAPANESEDOCDIR = $(XFREE86DOCDIR)/Japanese

# $XConsom: xm: xf86.rules /main/9 1996/10/31 14:54:26 kaleb $
# $XFr: xc/coc/config/cf/xf86.rules,v 3.16.2.1 1997/05/18 12:00:01 dawes Exp $

# ----------------------------------------------------------------------
# site-spic cic configuration parameters that go after
# the platform-specific parameters - edit site.def to change

# si $XConsornsortium: site.def /main/revisionist/4 1996/12/31 08:02:07 kaleb $
# site:  $XFree86: xc/config/cf/site.def,v 3.17.2.1 1997/06/22 10:32:21 dawes Exp $

# ---------------------------------------------------------------------
# e rules for for building libraries, programs, scripts, and data files
# rule$TOG: IG: Imake.rules /main/222 1997/07/17 20:04:40 kaleb $
# rules:  $XFree86: xc/config/cf/Imake.rules,v 3.33.2.7 1998/02/06 09:02:17 dawes Exp $

 _NULLCMD_ = @ echo -n

TKLIBNAME =

TKLIBDIR =

TCLLIBNAME =

TCLIBDIR =

          PATHSEP = /
            SHELL = /bin/sh

              TOP = ../../.././
      CURRENT_DIR = programs/Xserver/include

            IMAKE = $(IMAKESRC)/imake
           DEPEND = $(DEPENDSRC)/makedepend
        MKDIRHIER = mkdir -p
    EXPORTLISTGEN =
        CONFIGSRC = $(TOP)/config
         IMAKESRC = $(CONFIGSRC)/imake
        DEPENDSRC = $(CONFIGSRC)/makedepend

          INCROOT = /usr/X11R6/include
        USRLIBDIR = /usr/X11R6/lib
        VARLIBDIR = /var/lib
         SHLIBDIR = /usr/X11R6/lib
       LINTLIBDIR = $(USRLIBDIR)/lint
          MANPATH = /usr/X11R6/man
    MANSOURCEPATH = $(MANPATH)/man
           MANDIR = $(MANSOURCEPATH)1
        LIBMANDIR = $(MANSOURCEPATH)3
       FILEMANDIR = $(MANSOURCEPATH)5

               AR = ar clq
  BOOTSTRAPCFLAGS =
               CC = gcc
               AS = as

.SUFFIXES: .cc

              CXX = c++
          CXXFILT = c++filt
           CXXLIB =
    CXXDEBUGFLAGS = -O2
CXXDEPENDINCLUDES =
 CXXEXTRA_DEFINES =
CXXEXTRA_INCLUDES =
   CXXSTD_DEFINES = -Dlinux -D__x86_64__ 				-D_POSIX_C_SOURCE=199309L 				-D_POSIX_SOURCE -D_XOPEN_SOURCE=500L 				-D_BSD_SOURCE -D_SVID_SOURCE -D_REENTRANT $(CXXPROJECT_DEFINES)
       CXXOPTIONS =
      CXXINCLUDES = $(INCLUDES) $(TOP_INCLUDES) $(CXXEXTRA_INCLUDES)
       CXXDEFINES = $(CXXINCLUDES) $(CXXSTD_DEFINES) $(THREADS_CXXDEFINES) $(CXXEXTRA_DEFINES) $(DEFINES)
         CXXFLAGS = $(CXXDEBUGFLAGS) $(CXXOPTIONS) $(THREADS_CXXFLAGS) $(CXXDEFINES)

         COMPRESS = compress
          GZIPCMD = gzip
              CPP = /lib/cpp $(STD_CPP_DEFINES)
    PREPROCESSCMD = gcc -E $(STD_CPP_DEFINES)
          INSTALL = install
     INSTALLFLAGS = -c
               LD = ld
              LEX = flex -l
           LEXLIB = -lfl
             YACC = bison -y
           CCYACC = bison -y
             LINT = lint
      LINTLIBFLAG = -C
         LINTOPTS = -axz
               LN = ln -s
             MAKE = make
               MV = mv -f
               CP = cp

           RANLIB = ranlib
  RANLIBINSTFLAGS =

               RM = rm -f
        MANSUFFIX = 1x
     LIBMANSUFFIX = 3x
    FILEMANSUFFIX = 5x
            TROFF = psroff
            NROFF = nroff
         MSMACROS = -ms
        MANMACROS = -man
              TBL = tbl
              EQN = eqn
             NEQN = neqn
              COL = col

            DVIPS = dvips
            LATEX = latex

     STD_INCLUDES =
  STD_CPP_DEFINES = -traditional -Dlinux -D__x86_64__ 				-D_POSIX_C_SOURCE=199309L 				-D_POSIX_SOURCE -D_XOPEN_SOURCE=500L 				-D_BSD_SOURCE -D_SVID_SOURCE -D_REENTRANT $(PROJECT_DEFINES)
      STD_DEFINES = -Dlinux -D__x86_64__ 				-D_POSIX_C_SOURCE=199309L 				-D_POSIX_SOURCE -D_XOPEN_SOURCE=500L 				-D_BSD_SOURCE -D_SVID_SOURCE -D_REENTRANT $(PROJECT_DEFINES)
 EXTRA_LOAD_FLAGS = -Wl,-rpath-link,$(BUILDLIBDIR)
  EXTRA_LDOPTIONS =
  EXTRA_LIBRARIES =
             TAGS = ctags

   PARALLELMFLAGS =

    SHAREDCODEDEF =
         SHLIBDEF =

     SHLIBLDFLAGS = -shared

         PICFLAGS = -fPIC

      CXXPICFLAGS = -fPIC

    PROTO_DEFINES = -DFUNCPROTO=15 -DNARROWPROTO

     INSTPGMFLAGS = -s

     INSTBINFLAGS = -m 0755
     INSTUIDFLAGS = -m 4711
     INSTLIBFLAGS = -m 0644
     INSTINCFLAGS = -m 0444
     INSTMANFLAGS = -m 0444
     INSTDATFLAGS = -m 0444
    INSTKMEMFLAGS = -m 4711

      PROJECTROOT = /usr/X11R6

      CDEBUGFLAGS = -O2
        CCOPTIONS = -ansi -pedantic

      ALLINCLUDES = $(INCLUDES) $(EXTRA_INCLUDES) $(TOP_INCLUDES) $(STD_INCLUDES)
       ALLDEFINES = $(ALLINCLUDES) $(STD_DEFINES) $(EXTRA_DEFINES) $(PROTO_DEFINES) $(THREADS_DEFINES) $(DEFINES)
           CFLAGS = $(CDEBUGFLAGS) $(CCOPTIONS) $(THREADS_CFLAGS) $(ALLDEFINES)
        LINTFLAGS = $(LINTOPTS) -DLINT $(ALLDEFINES) $(DEPEND_DEFINES)
         LDPRELIB = -L$(BUILDLIBDIR)
        LDPOSTLIB =
        LDOPTIONS = $(CDEBUGFLAGS) $(CCOPTIONS)  $(EXTRA_LDOPTIONS) $(THREADS_LDFLAGS) $(LOCAL_LDFLAGS) $(LDPRELIBS)
     CXXLDOPTIONS = $(CXXDEBUGFLAGS) $(CXXOPTIONS) $(EXTRA_LDOPTIONS) $(THREADS_CXXLDFLAGS) $(LOCAL_LDFLAGS) $(LDPRELIBS)

           LDLIBS = $(LDPOSTLIBS) $(THREADS_LIBS) $(SYS_LIBRARIES) $(EXTRA_LIBRARIES)

           CCLINK = $(CC)

          CXXLINK = $(CXX)

     LDSTRIPFLAGS = -x
   LDCOMBINEFLAGS = -r
      DEPENDFLAGS =

# Not sure this belongs here
         TKLIBDIR =
         TKINCDIR =
        TKLIBNAME =
        TKLIBRARY = -L$(TKLIBDIR) -l$(TKLIBNAME)
        TCLLIBDIR =
        TCLINCDIR =
       TCLLIBNAME =
       TCLLIBRARY = -L$(TCLLIBDIR) -l$(TCLLIBNAME)

        MACROFILE = linux.cf
           RM_CMD = $(RM)

    IMAKE_DEFINES =

         IRULESRC = $(CONFIGSRC)/cf
        IMAKE_CMD = $(IMAKE) -I$(IRULESRC) $(IMAKE_DEFINES)

     ICONFIGFILES = $(IRULESRC)/Imake.tmpl $(IRULESRC)/X11.tmpl 			$(IRULESRC)/site.def $(IRULESRC)/$(MACROFILE) 			$(IRULESRC)/xfree86.cf $(IRULESRC)/xf86.rules $(IRULESRC)/vnc.def $(EXTRA_ICONFIGFILES)

# $ X11.rulesules /main/4 1997/04/30 15:23:24 kaleb $

# ----------------------------------------------------------------------
# X Window System Build Parameters and Rules
# $TOG: X11.tmpl /main/292 1997/05/20 10:05:59 kaleb $
#
#
#
#
# $XFree86:coc/config/cf/X11.tmpl,v 1.8.2.4 1998/01/23 12:35:08 dawes Exp $

# -----------------------------------------------------------------------
# X Window System make variables; these need to be coordinated with rules

             XTOP = $(TOP)
           BINDIR = /usr/X11R6/bin
     BUILDINCROOT = $(TOP)/exports
      BUILDINCDIR = $(BUILDINCROOT)/include
      BUILDINCTOP = ../..
      BUILDLIBDIR = $(TOP)/exports/lib
      BUILDLIBTOP = ../..
      BUILDBINDIR = $(TOP)/exports/bin
      BUILDBINTOP = ../..
    XBUILDINCROOT = $(XTOP)/exports
     XBUILDINCDIR = $(XBUILDINCROOT)/include/X11
     XBUILDINCTOP = ../../..
     XBUILDBINDIR = $(XBUILDINCROOT)/bin
           INCDIR = $(INCROOT)
           ADMDIR = /usr/adm
           LIBDIR = $(USRLIBDIR)/X11
   TOP_X_INCLUDES = -I$(TOP)/exports/include

           VARDIR = /var/X11

          FONTDIR = $(LIBDIR)/fonts
         XINITDIR = $(LIBDIR)/xinit
           XDMDIR = $(LIBDIR)/xdm
        XDMVARDIR = $(VARLIBDIR)/xdm
           TWMDIR = $(LIBDIR)/twm
           XSMDIR = $(LIBDIR)/xsm
           NLSDIR = $(LIBDIR)/nls
       XLOCALEDIR = $(LIBDIR)/locale
        PEXAPIDIR = $(LIBDIR)/PEX
      LBXPROXYDIR = $(LIBDIR)/lbxproxy
  PROXYMANAGERDIR = $(LIBDIR)/proxymngr
        XPRINTDIR = $(LIBDIR)
      XAPPLOADDIR = $(LIBDIR)/app-defaults
       FONTCFLAGS = -t

     INSTAPPFLAGS = $(INSTDATFLAGS)

              RGB = $(CLIENTENVSETUP) $(XBUILDBINDIR)/rgb
            FONTC = $(CLIENTENVSETUP) $(XBUILDBINDIR)/bdftopcf
        MKFONTDIR = $(CLIENTENVSETUP) $(XBUILDBINDIR)/mkfontdir

       DOCUTILSRC = $(XTOP)/doc/util
        CLIENTSRC = $(TOP)/clients
          DEMOSRC = $(TOP)/demos
       XDOCMACROS = $(DOCUTILSRC)/macros.t
       XIDXMACROS = $(DOCUTILSRC)/indexmacros.t
       PROGRAMSRC = $(TOP)/programs
           LIBSRC = $(XTOP)/lib
          FONTSRC = $(XTOP)/fonts
       INCLUDESRC = $(BUILDINCROOT)/include
      XINCLUDESRC = $(INCLUDESRC)/X11
        SERVERSRC = $(XTOP)/programs/Xserver
       CONTRIBSRC = $(XTOP)/../contrib
   UNSUPPORTEDSRC = $(XTOP)/unsupported
           DOCSRC = $(XTOP)/doc
           RGBSRC = $(XTOP)/programs/rgb
      BDFTOPCFSRC = $(PROGRAMSRC)/bdftopcf
     MKFONTDIRSRC = $(PROGRAMSRC)/mkfontdir
    FONTSERVERSRC = $(PROGRAMSRC)/xfs
       FONTINCSRC = $(XTOP)/include/fonts
        EXTINCSRC = $(XTOP)/include/extensions
     TRANSCOMMSRC = $(LIBSRC)/xtrans
   TRANS_INCLUDES = -I$(TRANSCOMMSRC)

       XENVLIBDIR = $(TOP)/exports/lib
   CLIENTENVSETUP = LD_LIBRARY_PATH=$(XENVLIBDIR)

# $XConsort lm: lnxLib.tmpl,v 1.5 95/01/11 21:44:44 kaleb Exp $
# $XFre xc/coc/config/cf/lnxLib.tmpl,v 3.9 1996/02/24 04:32:52 dawes Exp $

          XLIBSRC = $(LIBSRC)/X11

SOXLIBREV = 6.1
DEPXONLYLIB =
XONLYLIB =  -lX11

LINTXONLY = $(XLIBSRC)/llib-X11.ln

         XLIBONLY = $(XONLYLIB)

      XEXTLIBSRC = $(LIBSRC)/Xext

SOXEXTREV = 6.3
DEPEXTENSIONLIB =
EXTENSIONLIB =  -lXext

LINTEXTENSION = $(XEXTLIBSRC)/llib-Xext.ln

LINTEXTENSIONLIB = $(LINTEXTENSION)
          DEPXLIB = $(DEPEXTENSIONLIB) $(DEPXONLYLIB)
             XLIB = $(EXTENSIONLIB) $(XONLYLIB)
         LINTXLIB = $(LINTXONLYLIB)

         XAUTHSRC = $(LIBSRC)/Xau

DEPXAUTHLIB = $(TOP)/exports/lib/libXau.a
XAUTHLIB =  -lXau

LINTXAUTH = $(XAUTHSRC)/llib-Xau.ln

      XDMCPLIBSRC = $(LIBSRC)/Xdmcp

DEPXDMCPLIB = $(TOP)/exports/lib/libXdmcp.a
XDMCPLIB =  -lXdmcp

LINTXDMCP = $(XDMCPLIBSRC)/llib-Xdmcp.ln

           XMUSRC = $(LIBSRC)/Xmu

SOXMUREV = 6.0
DEPXMULIB =
XMULIB =  -lXmu

LINTXMU = $(XMUSRC)/llib-Xmu.ln

       OLDXLIBSRC = $(LIBSRC)/oldX

DEPOLDXLIB = $(TOP)/exports/lib/liboldX.a
OLDXLIB =  -loldX

LINTOLDX = $(OLDXLIBSRC)/llib-oldX.ln

         XPLIBSRC = $(LIBSRC)/Xp

SOXPREV = 6.2
DEPXPLIB =
XPLIB =  -lXp

LINTXP = $(XPLIBSRC)/llib-Xp.ln

       TOOLKITSRC = $(LIBSRC)/Xt

SOXTREV = 6.0
DEPXTOOLONLYLIB =
XTOOLONLYLIB =  -lXt

LINTXTOOLONLY = $(TOOLKITSRC)/llib-Xt.ln

      DEPXTOOLLIB = $(DEPXTOOLONLYLIB) $(DEPSMLIB) $(DEPICELIB)
         XTOOLLIB = $(XTOOLONLYLIB) $(SMLIB) $(ICELIB)
     LINTXTOOLLIB = $(LINTXTOOLONLYLIB)

       XALIBSRC = $(LIBSRC)/Xa

SOXAREV = 1.0
DEPXALIB =
XALIB =  -lXa

LINTXA = $(XALIBSRC)/llib-Xa.ln

       AWIDGETSRC = $(LIBSRC)/Xaw

SOXAWREV = 6.1
DEPXAWLIB =
XAWLIB =  -lXaw

LINTXAW = $(AWIDGETSRC)/llib-Xaw.ln

         XILIBSRC = $(LIBSRC)/Xi

SOXINPUTREV = 6.0
DEPXILIB =
XILIB =  -lXi

LINTXI = $(XILIBSRC)/llib-Xi.ln

      XTESTLIBSRC = $(LIBSRC)/Xtst

SOXTESTREV = 6.1
DEPXTESTLIB =
XTESTLIB =  -lXtst

LINTXTEST = $(XTESTLIBSRC)/llib-Xtst.ln

        PEXLIBSRC = $(LIBSRC)/PEX5

SOPEXREV = 6.0
DEPPEXLIB =
PEXLIB =  -lPEX5

LINTPEX = $(PEXLIBSRC)/llib-PEX5.ln

        XIELIBSRC = $(LIBSRC)/XIE

SOXIEREV = 6.0
DEPXIELIB =
XIELIB =  -lXIE

LINTXIE = $(XIELIBSRC)/llib-XIE.ln

      PHIGSLIBSRC = $(LIBSRC)/PHIGS

DEPPHIGSLIB = $(TOP)/exports/lib/libphigs.a
PHIGSLIB =  -lphigs

LINTPHIGS = $(PHIGSLIBSRC)/llib-phigs.ln

DEPXBSDLIB = $(TOP)/exports/lib/libXbsd.a
XBSDLIB =  -lXbsd

LINTXBSD = $(LIBSRC)/Xbsd/llib-Xbsd.ln

           ICESRC = $(LIBSRC)/ICE

SOICEREV = 6.3
DEPICELIB =
ICELIB =  -lICE

LINTICE = $(ICESRC)/llib-ICE.ln

            SMSRC = $(LIBSRC)/SM

SOSMREV = 6.0
DEPSMLIB =
SMLIB =  -lSM

LINTSM = $(SMSRC)/llib-SM.ln

           XKEYSRC = $(LIBSRC)/Xkey

SOXKEYREV = 6.0
DEPXKEYLIB =
XKEYLIB =  -lXkey

LINTXKEY = $(XKEYSRC)/llib-Xkey.ln

         FSLIBSRC = $(LIBSRC)/FS

DEPFSLIB = $(TOP)/exports/lib/libFS.a
FSLIB =  -lFS

LINTFS = $(FSLIBSRC)/llib-FS.ln

         FONTLIBSRC = $(LIBSRC)/font

DEPFONTLIB = $(TOP)/exports/lib/libfont.a
FONTLIB =  -lfont

LINTFONT = $(FONTLIBSRC)/llib-font.ln

          XPMLIBSRC = $(LIBSRC)/Xpm

DEPXPMLIB = $(TOP)/exports/lib/libXpm.a
XPMLIB =  -lXpm

LINTXPM = $(XPMLIBSRC)/llib-Xpm.ln

    XKBFILELIBSRC = $(LIBSRC)/xkbfile

DEPXKBFILELIB = $(TOP)/exports/lib/libxkbfile.a
XKBFILELIB =  -lxkbfile

LINTXKBFILE = $(XKBFILELIBSRC)/llib-xkbfile.ln

     XKBCOMPSRC = $(PROGRAMSRC)/xkbcomp
     XKBCOMPCMD = $(CLIENTENVSETUP) $(XKBCOMPSRC)/xkbcomp

    XKBUILIBSRC = $(LIBSRC)/xkbui

DEPXKBUILIB = $(TOP)/exports/lib/libxkbui.a
XKBUILIB =  -lxkbui

LINTXKBUI = $(XKBUILIBSRC)/llib-xkbui.ln

          DEPLIBS = $(DEPXAWLIB) $(DEPXMULIB) $(DEPXTOOLLIB) $(DEPXLIB)

         DEPLIBS1 = $(DEPLIBS)
         DEPLIBS2 = $(DEPLIBS)
         DEPLIBS3 = $(DEPLIBS)
         DEPLIBS4 = $(DEPLIBS)
         DEPLIBS5 = $(DEPLIBS)
         DEPLIBS6 = $(DEPLIBS)
         DEPLIBS7 = $(DEPLIBS)
         DEPLIBS8 = $(DEPLIBS)
         DEPLIBS9 = $(DEPLIBS)
         DEPLIBS10 = $(DEPLIBS)

XMULIBONLY = -lXmu
XMULIB = $(XMULIBONLY) $(XTOOLLIB) $(XLIB)

        CONFIGDIR = $(LIBDIR)/config

    USRLIBDIRPATH = $(USRLIBDIR)
        LDPRELIBS = -L$(BUILDLIBDIR)
       LDPOSTLIBS =
     TOP_INCLUDES = -I$(TOP) $(TOP_X_INCLUDES)
  PROJECT_DEFINES =

CXXPROJECT_DEFINES =

# ----------------------------------------------------------------------
# start of Imakefile

# $XConsortiIm: Imakefile,v 1.2 95/01/13 20:28:14 kaleb Exp $
# $XFree86/prc/programs/Xserver/include/Imakefile,v 3.5.4.1 1997/05/12 12:52:39 hohndel Exp $

all::

install.linkkit:: closure.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) closure.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: colormap.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) colormap.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: colormapst.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) colormapst.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: cursor.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) cursor.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: cursorstr.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) cursorstr.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: dix.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) dix.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: dixfont.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) dixfont.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: dixfontstr.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) dixfontstr.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: dixstruct.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) dixstruct.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: extension.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) extension.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: extnsionst.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) extnsionst.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: gc.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) gc.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: gcstruct.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) gcstruct.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: input.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) input.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: inputstr.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) inputstr.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: misc.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) misc.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: miscstruct.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) miscstruct.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: opaque.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) opaque.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: os.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) os.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: pixmap.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) pixmap.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: pixmapstr.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) pixmapstr.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: property.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) property.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: resource.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) resource.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: region.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) region.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: regionstr.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) regionstr.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: screenint.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) screenint.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: scrnintstr.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) scrnintstr.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: servermd.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) servermd.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: site.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) site.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: validate.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) validate.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: window.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) window.h $(DESTDIR)$(LINKKITDIR)/include

install.linkkit:: windowstr.h
	@if [ -d $(DESTDIR)$(LINKKITDIR)/include ]; then set +x; \
		else (set -x; $(MKDIRHIER) $(DESTDIR)$(LINKKITDIR)/include); fi
	$(INSTALL) -c $(INSTDATFLAGS) windowstr.h $(DESTDIR)$(LINKKITDIR)/include

depend::

# ----------------------------------------------------------------------
# common s fos for all Makefiles - do not edit

.c.i:
	$(RM) $@
	 	$(CC) -E $(CFLAGS) $(_NOOP_) $*.c > $@

emptyrule::

clean::
	$(RM) *.CKP *.ln *.BAK *.bak *.o core errs ,* *~ *.a .emacs_* tags TAGS make.log MakeOut  "#"*

Makefile:: $(IMAKE)

$(IMAKE) $(IMAKE).o:
	-@(cd $(IMAKESRC) && if [ -f Makefile ]; then \
	echo "checking $@ in $(IMAKESRC) first..."; $(MAKE) all; else \
	echo "bootstrapping $@ from Makefile.ini in $(IMAKESRC) first..."; \
	$(MAKE) -f Makefile.ini BOOTSTRAPCFLAGS="$(BOOTSTRAPCFLAGS)"; fi; \
	echo "okay, continuing in $(CURRENT_DIR)")

Makefile::
	-@if [ -f Makefile ]; then set -x; \
	$(RM) Makefile.bak; $(MV) Makefile Makefile.bak; \
	else exit 0; fi
	$(IMAKE_CMD) -DTOPDIR=$(TOP) -DCURDIR=$(CURRENT_DIR)

tags::
	$(TAGS) -w *.[ch]
	$(TAGS) -xw *.[ch] > TAGS

man_keywords::

# ----------------------------------------------------------------------
# empty rules for directories that do not have SUBDIRS - do not edit

install::
	@echo "install in $(CURRENT_DIR) done"

install.man::
	@echo "install.man in $(CURRENT_DIR) done"

install.linkkit::
	@echo "install.linkkit in $(CURRENT_DIR) done"

Makefiles::

includes::

depend::

# ----------------------------------------------------------------------
# deencies ges generated by makedepend

