#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void DeleteRiotMessagingServiceV1Session (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/riot-messaging-service/v1/session";
    HttpsClient client(info.host, false);
    auto res = client.request("delete", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
