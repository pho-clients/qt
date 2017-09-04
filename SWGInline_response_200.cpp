/**
 * Social Graph API
 * Pho Networks REST API
 *
 * OpenAPI spec version: 1.1.1
 * Contact: emre@phonetworks.org
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include "SWGInline_response_200.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200::SWGInline_response_200(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200::SWGInline_response_200() {
    init();
}

SWGInline_response_200::~SWGInline_response_200() {
    this->cleanup();
}

void
SWGInline_response_200::init() {
    id = NULL;
    class = new QString("");
}

void
SWGInline_response_200::cleanup() {
    
    if(id != nullptr) {
        delete id;
    }

    if(class != nullptr) {
        delete class;
    }
}

SWGInline_response_200*
SWGInline_response_200::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&id, pJson["id"], "SWGUUID", "SWGUUID");
    ::Swagger::setValue(&class, pJson["class"], "QString", "QString");
}

QString
SWGInline_response_200::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("id"), id, obj, QString("SWGUUID"));

    toJsonValue(QString("class"), class, obj, QString("QString"));

    return obj;
}

SWGUUID*
SWGInline_response_200::getId() {
    return id;
}
void
SWGInline_response_200::setId(SWGUUID* id) {
    this->id = id;
}

QString*
SWGInline_response_200::getClass() {
    return class;
}
void
SWGInline_response_200::setClass(QString* class) {
    this->class = class;
}



} /* namespace Swagger */
