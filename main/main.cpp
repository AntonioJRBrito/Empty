#include <esp_log.h>
#include <esp_event.h>

extern "C" void app_main(void) {
    esp_log_level_set("*", ESP_LOG_INFO);
    ESP_LOGI("MAIN", "Inicio");
}