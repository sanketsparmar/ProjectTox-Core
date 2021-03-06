noinst_PROGRAMS += DHT_bootstrap

DHT_bootstrap_SOURCES = $(top_srcdir)/other/DHT_bootstrap.c \
                        $(top_srcdir)/toxcore/DHT.h \
                        $(top_srcdir)/toxcore/friend_requests.h \
                        $(top_srcdir)/testing/misc_tools.h \
                        $(top_srcdir)/testing/misc_tools.c

DHT_bootstrap_CFLAGS = -I$(top_srcdir)/other \
                        $(LIBSODIUM_CFLAGS)

DHT_bootstrap_LDADD =   $(LIBSODIUM_LDFLAGS) \
                        libtoxcore.la \
                        $(LIBSODIUM_LIBS) \
                        $(WINSOCK2_LIBS)

EXTRA_DIST +=           $(top_srcdir)/other/DHTservers \
                        $(top_srcdir)/other/tox.png
