using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyLobbyLastQueuedLobby
    {
        [DataMember(Name = "canPlayAgain")]
        bool CanPlayAgain { get; set; }

        [DataMember(Name = "members")]
        LolLobbyLobbyLastQueuedMember[] Members { get; set; }

        [DataMember(Name = "queueId")]
        int QueueId { get; set; }

        [DataMember(Name = "wasOwner")]
        bool WasOwner { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyLastQueuedLobby {\n");
            sb.Append("  CanPlayAgain: ").Append(CanPlayAgain).Append("\n");
            sb.Append("  Members: ").Append(Members).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("  WasOwner: ").Append(WasOwner).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}