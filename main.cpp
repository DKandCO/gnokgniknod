#include "view.h"
#include "model.h"
#include "control.h"
#include <QApplication>

int main(int argc, char *argv[])
{

   QApplication app(argc, argv);
   View w;
   Model m;
   Control c(&m, &w);
   w.setControl(&c);

   w.show();



    return app.exec();
}
