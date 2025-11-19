#include <cwiid.h>

int main(int argc, char **argv) {
  cwiid_wiimote_t *wiimote = cwiid_open(BDADDR_ANY, CWIID_FLAG_MESG_IFC);

  cwiid_close(wiimote);
  return 0;
}
