/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the demonstration applications of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL21$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia. For licensing terms and
** conditions see http://qt.digia.com/licensing. For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file. Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights. These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "composition.h"
#include "TargetCircleWidget.h"
#include "Skin.h"
#include <QPixmap>
#include <QtWidgets>
#include <QtCore/qstate.h>

#include <QApplication>















int main(int argc, char *argv[])
{

  QApplication app(argc, argv);


   QWidget *window = new QWidget;
  //QTimer::singleShot(1000, window, SLOT(showFullScreen()));
//window->resize(QApplication::desktop()->availableGeometry().size());
   window->resize(400,600);

 // cad_mobile_application::MainWindow w;
cad_mobile_application::Skin skin;
skin.resize(600,780);
skin.setStyleSheet("* { background-color: rgb(234, 252, 254); }");
skin.show();
  QGridLayout *layout = new QGridLayout;
//w.setStyleSheet("* { background-color: rgb(255,255,255,0); }");




//  layout->addWidget(view, 0, 0);
  //layout->addWidget(&w, 0, 0);

 //

 //window->setStyleSheet("* { background-color: rgb(234, 252, 254); }");


//layout->setContentsMargins(0,0,0,0);


 //layout->addWidget(&skin, 0, 0);
//layout->addWidget(button, 0, 0,Qt::AlignCenter);

// window->setLayout(layout);
    // window->show();



  return app.exec();
}
#include "main.moc"
