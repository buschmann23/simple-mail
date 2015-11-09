/*
  Copyright (c) 2011-2012 - Tőkés Attila

  This file is part of SmtpClient for Qt.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  See the LICENSE file for more details.
*/

#include "mimetext_p.h"

MimeText::MimeText(const QString &txt)
{
    Q_D(MimePart);
    d->cType = QByteArrayLiteral("text/plain");
    d->cCharset = QByteArrayLiteral("utf-8");
    d->cEncoding = _8Bit;
    setData(txt);
}

MimeText::~MimeText()
{

}

void MimeText::setText(const QString &text)
{
    setData(text);
}

QString MimeText::text() const
{
    return data();
}
