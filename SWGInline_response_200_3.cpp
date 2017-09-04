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


#include "SWGInline_response_200_3.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_3::SWGInline_response_200_3(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_3::SWGInline_response_200_3() {
    init();
}

SWGInline_response_200_3::~SWGInline_response_200_3() {
    this->cleanup();
}

void
SWGInline_response_200_3::init() {
    from = new QList<SWGNodeEdge*>();
    to = new QList<SWGNodeEdge*>();
    in = new QList<SWGInline_response_200_3_in*>();
    out = new QList<SWGInline_response_200_3_in*>();
}

void
SWGInline_response_200_3::cleanup() {
    
    if(from != nullptr) {
        QList<SWGNodeEdge*>* arr = from;
        foreach(SWGNodeEdge* o, *arr) {
            delete o;
        }
        delete from;
    }

    if(to != nullptr) {
        QList<SWGNodeEdge*>* arr = to;
        foreach(SWGNodeEdge* o, *arr) {
            delete o;
        }
        delete to;
    }

    if(in != nullptr) {
        QList<SWGInline_response_200_3_in*>* arr = in;
        foreach(SWGInline_response_200_3_in* o, *arr) {
            delete o;
        }
        delete in;
    }

    if(out != nullptr) {
        QList<SWGInline_response_200_3_in*>* arr = out;
        foreach(SWGInline_response_200_3_in* o, *arr) {
            delete o;
        }
        delete out;
    }
}

SWGInline_response_200_3*
SWGInline_response_200_3::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_3::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&from, pJson["from"], "QList", "SWGNodeEdge");
    
    
    ::Swagger::setValue(&to, pJson["to"], "QList", "SWGNodeEdge");
    
    
    ::Swagger::setValue(&in, pJson["in"], "QList", "SWGInline_response_200_3_in");
    
    
    ::Swagger::setValue(&out, pJson["out"], "QList", "SWGInline_response_200_3_in");
    
}

QString
SWGInline_response_200_3::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_3::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray fromJsonArray;
    toJsonArray((QList<void*>*)from, &fromJsonArray, "from", "SWGNodeEdge");
    obj->insert("from", fromJsonArray);

    QJsonArray toJsonArray;
    toJsonArray((QList<void*>*)to, &toJsonArray, "to", "SWGNodeEdge");
    obj->insert("to", toJsonArray);

    QJsonArray inJsonArray;
    toJsonArray((QList<void*>*)in, &inJsonArray, "in", "SWGInline_response_200_3_in");
    obj->insert("in", inJsonArray);

    QJsonArray outJsonArray;
    toJsonArray((QList<void*>*)out, &outJsonArray, "out", "SWGInline_response_200_3_in");
    obj->insert("out", outJsonArray);

    return obj;
}

QList<SWGNodeEdge*>*
SWGInline_response_200_3::getFrom() {
    return from;
}
void
SWGInline_response_200_3::setFrom(QList<SWGNodeEdge*>* from) {
    this->from = from;
}

QList<SWGNodeEdge*>*
SWGInline_response_200_3::getTo() {
    return to;
}
void
SWGInline_response_200_3::setTo(QList<SWGNodeEdge*>* to) {
    this->to = to;
}

QList<SWGInline_response_200_3_in*>*
SWGInline_response_200_3::getIn() {
    return in;
}
void
SWGInline_response_200_3::setIn(QList<SWGInline_response_200_3_in*>* in) {
    this->in = in;
}

QList<SWGInline_response_200_3_in*>*
SWGInline_response_200_3::getOut() {
    return out;
}
void
SWGInline_response_200_3::setOut(QList<SWGInline_response_200_3_in*>* out) {
    this->out = out;
}



} /* namespace Swagger */
