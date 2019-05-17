#pragma once

#include <launchdarkly/api.h>

struct LDConfig {
    char *key;
    char *baseURI;
    char *streamURI;
    char *eventsURI;
    bool stream;
    bool sendEvents;
    unsigned int eventsCapacity;
    unsigned int timeout;
    unsigned int flushInterval;
    unsigned int pollInterval;
    bool offline;
    bool useLDD;
    bool allAttributesPrivate;
    struct LDJSON *privateAttributeNames; /* Array of Text */
    unsigned int userKeysCapacity;
    unsigned int userKeysFlushInterval;
    bool defaultStore;
    struct LDStore *store;
};
