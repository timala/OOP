#include"view.h"
#include"button.h"
#include"controller.h"

int main()
{
    View *mainObjectView = new View;
    Button *mainObjectButton = new Button;
    Controller *mainObjectController;

    mainObjectController = new Controller(mainObjectView,mainObjectButton);

    delete mainObjectView;
    mainObjectView = nullptr;

    delete mainObjectButton;
    mainObjectButton = nullptr;

    delete mainObjectController;
    mainObjectController = nullptr;
    return 0;
}
