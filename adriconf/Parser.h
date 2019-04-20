#ifndef DRICONF3_PARSER_H
#define DRICONF3_PARSER_H

#include <glibmm/ustring.h>
#include "Section.h"
#include "Device.h"
#include <libxml++/libxml++.h>
#include <list>
#include <iostream>

namespace Parser {
    std::list<Section> parseAvailableConfiguration(const Glib::ustring &xml, const Glib::ustring &currentLocale);

    DriverOption parseSectionOptions(xmlpp::Node *option, const Glib::ustring &currentLocale);

    std::list<Device_ptr> parseDevices(Glib::ustring &xml);

    Application_ptr parseApplication(xmlpp::Node *application);
};

#endif
