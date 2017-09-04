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

/*
 * SWGInline_response_200_3.h
 * 
 * 
 */

#ifndef SWGInline_response_200_3_H_
#define SWGInline_response_200_3_H_

#include <QJsonObject>


#include "SWGInline_response_200_3_in.h"
#include "SWGNodeEdge.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_3: public SWGObject {
public:
    SWGInline_response_200_3();
    SWGInline_response_200_3(QString* json);
    virtual ~SWGInline_response_200_3();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_3* fromJson(QString &jsonString);

    QList<SWGNodeEdge*>* getFrom();
    void setFrom(QList<SWGNodeEdge*>* from);

    QList<SWGNodeEdge*>* getTo();
    void setTo(QList<SWGNodeEdge*>* to);

    QList<SWGInline_response_200_3_in*>* getIn();
    void setIn(QList<SWGInline_response_200_3_in*>* in);

    QList<SWGInline_response_200_3_in*>* getOut();
    void setOut(QList<SWGInline_response_200_3_in*>* out);


private:
    QList<SWGNodeEdge*>* from;
    QList<SWGNodeEdge*>* to;
    QList<SWGInline_response_200_3_in*>* in;
    QList<SWGInline_response_200_3_in*>* out;
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_3_H_ */
