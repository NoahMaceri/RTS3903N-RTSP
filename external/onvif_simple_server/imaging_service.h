/*
 * Copyright (c) 2025 Noah Maceri
 * GPLv3 — see top-level LICENSE.
 */

#ifndef IMAGING_SERVICE_H
#define IMAGING_SERVICE_H

int imaging_get_service_capabilities();
int imaging_get_imaging_settings();
int imaging_set_imaging_settings();
int imaging_get_options();
int imaging_get_status();
int imaging_get_move_options();

int imaging_unsupported(const char *method);

#endif
