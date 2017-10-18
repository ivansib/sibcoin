#include "combobox.h"

ComboBox::ComboBox(QWidget *parent) : QComboBox(parent)
{

}

void ComboBox::setCurrentData(const QString &data) {
    int index = findData(data);
    setCurrentIndex(index);
}

QString ComboBox::toString(const std::string &str) const
{
    return QString::fromUtf8(str.c_str());
}

QString ComboBox::toString(const uint8_t &i) const
{
    return QString::number(i);
}
