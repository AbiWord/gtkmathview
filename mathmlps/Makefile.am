
NULL =

bin_PROGRAMS = $(NULL)
if COND_LIBXML2
bin_PROGRAMS += mathmlps
endif

mathmlps_SOURCES = \
  MathView.hh \
  Model.hh \
  main.cc \
  $(NULL)

mathmlps_LDADD = \
  $(POPT_LIBS) \
  $(GLIB_LIBS) \
  $(top_builddir)/src/backend/ps/libmathview_backend_ps.la \
  $(top_builddir)/src/view/libmathview_frontend_libxml2.la \
  $(top_builddir)/src/libmathview.la \
  $(NULL)

AM_CPPFLAGS = \
  -I$(top_builddir)/auto \
  -I$(top_srcdir)/auto \
  -I$(top_srcdir)/src/common \
  -I$(top_srcdir)/src/common/mathvariants \
  -I$(top_srcdir)/src/frontend/common \
  -I$(top_srcdir)/src/frontend/libxml2 \
  -I$(top_srcdir)/src/engine/common \
  -I$(top_srcdir)/src/engine/mathml \
  -I$(top_srcdir)/src/engine/boxml \
  -I$(top_srcdir)/src/backend/common \
  -I$(top_srcdir)/src/backend/ps \
  -I$(top_srcdir)/src/view \
  $(POPT_CFLAGS) \
  $(XML_CFLAGS) \
  $(NULL)

