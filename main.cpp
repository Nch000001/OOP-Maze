#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    // 创建一个按钮，按钮的文本为 "Click me"
    QPushButton button("Click me");
    button.resize(800, 600);

    // 设置按钮点击后的动作：改变窗口标题
    QObject::connect(&button, &QPushButton::clicked, [&button]() {
        button.setText("Button clicked");
    });

    button.show();
    return app.exec();
}