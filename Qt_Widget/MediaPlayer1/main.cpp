#include "videoplayer.h"

#include <QtWidgets/QApplication>
#include <QtWidgets/QDesktopWidget>
#include <QtCore/QCommandLineParser>
#include <QtCore/QCommandLineOption>
#include <QtCore/QDir>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QCoreApplication::setApplicationName("Video Widget Example");
    QCoreApplication::setOrganizationName("QtProject");
    QGuiApplication::setApplicationDisplayName(QCoreApplication::applicationName());
    QCoreApplication::setApplicationVersion(QT_VERSION_STR);
    QCommandLineParser parser;
    parser.setApplicationDescription("Qt Video Widget Example");
    parser.addHelpOption();
    parser.addVersionOption();
    parser.addPositionalArgument("url", "The URL to open.");
    parser.process(app);

    VideoPlayer player;
    if (!parser.positionalArguments().isEmpty()) {
        const QUrl url =
            QUrl::fromUserInput(parser.positionalArguments().constFirst(),
                                QDir::currentPath(), QUrl::AssumeLocalFile);
        player.setUrl(url);
    }

    const QRect availableGeometry = QApplication::desktop()->availableGeometry(&player);
    player.resize(availableGeometry.width() / 6, availableGeometry.height() / 4);
    player.show();

    return app.exec();
}
