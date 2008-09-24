Summary:      An X Window System tool for drawing basic vector graphics.
Name:         xfig
Version:      3.2.5_alpha5
Release:      0
Epoch:        1
Copyright:    Freeware
Vendor:       Brian V. Smith <bvsmith@lbl.gov>
Distribution: xfig/transfig
Group:        Applications/Multimedia
Source0:      xfig.3.2.5_alpha5.full.tar.gz
URL:          http://epb.lbl.gov/xfig/
Requires:     transfig >= 3.2.5_alpha5
Buildroot:    %{_tmppath}/%{name}-root

%description
Xfig is an X Window System tool for creating basic vector graphics,
including arcs, ellipses, bezier curves, lines, rulers and more.
The resulting graphics can be saved, printed on PostScript printers 
or converted to a variety of other formats (e.g., X11 bitmaps, CGM,
Encapsulated PostScript, LaTeX).

You should install xfig if you need a program to create vector graphics.

%prep
%setup -q -n xfig.%{version}

%build
export PATH=$PATH:/usr/X11R6/bin
xmkmf
ln -nfs Doc/xfig.man xfig.man
make DOCDIR=%{_docdir}

%install
rm -rf $RPM_BUILD_ROOT

make DESTDIR=$RPM_BUILD_ROOT DOCDIR=%{_docdir} install install.all

mkdir -p $RPM_BUILD_ROOT/usr/X11R6/lib/X11/xfig \
	$RPM_BUILD_ROOT/etc/X11/applnk/Graphics \
        $RPM_BUILD_ROOT/usr/share/pixmaps

install -m 755 xfig $RPM_BUILD_ROOT/usr/X11R6/bin
install -m 644 xfig.man $RPM_BUILD_ROOT/usr/X11R6/man/man1/xfig.1x
install -m 644 CompKeyDB $RPM_BUILD_ROOT/usr/X11R6/lib/X11/xfig
install -m 644 Fig.ad $RPM_BUILD_ROOT/usr/X11R6/lib/X11/app-defaults/Fig
install -m 644 Fig-color.ad $RPM_BUILD_ROOT/usr/X11R6/lib/X11/app-defaults/Fig-color
install -m 644 xfig.png $RPM_BUILD_ROOT/usr/share/pixmaps
install -m 644 xfig.desktop $RPM_BUILD_ROOT/etc/X11/applnk/Graphics

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root)
/usr/X11R6/bin/*
/usr/X11R6/lib/X11/%{name}/*
/usr/X11R6/man/*/*
/usr/share/pixmaps/%{name}.png
%doc %{_docdir}/%{name}
/usr/X11R6/lib/X11/app-defaults/*
%config /etc/X11/applnk/Graphics/%{name}.desktop

