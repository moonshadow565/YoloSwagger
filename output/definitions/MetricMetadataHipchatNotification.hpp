#ifndef SWAGGER_TYPES_MetricMetadataHipchatNotification_HPP
#define SWAGGER_TYPES_MetricMetadataHipchatNotification_HPP
#include <json.hpp>
namespace test {
  // 
  struct MetricMetadataHipchatNotification {
'    // 
    std::string roomid;
    // 
    std::string tags;
  };

  void to_json(nlohmann::json& j, const MetricMetadataHipchatNotification& v) {
    j["roomid"] = v.roomid;
    j["tags"] = v.tags;
  }

  void from_json(const nlohmann::json& j, MetricMetadataHipchatNotification& v) {
    v.roomid = j.at("roomid").get<std::string>;
    v.tags = j.at("tags").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_MetricMetadataHipchatNotification_HPP
