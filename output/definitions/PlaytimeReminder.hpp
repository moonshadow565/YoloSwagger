#ifndef SWAGGER_TYPES_PlaytimeReminder_HPP
#define SWAGGER_TYPES_PlaytimeReminder_HPP
#include <json.hpp>
namespace test {
  // 
  struct PlaytimeReminder {
'    // 
    uint32_t hours;
  };

  void to_json(nlohmann::json& j, const PlaytimeReminder& v) {
    j["hours"] = v.hours;
  }

  void from_json(const nlohmann::json& j, PlaytimeReminder& v) {
    v.hours = j.at("hours").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_PlaytimeReminder_HPP
