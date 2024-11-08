# Hell Client: A Deep Dive into the World of Malware Distribution

## What is Hell Client?

Hell Client is the name of an executable designed to imitate malware masked as a game cheat client. This code was created as the start of my study into malware distribution through game cheats. After a conversation with my close friend about his attempt to find cheats for a game, I realized how deep this world runs. As someone who knew little about programming and computers, he automatically knew to disable Windows Defender and click through SmartScreen when attempting to run a new cheat. This interaction opened my eyes to something I was unaware of prior, and after more online research, it's easy to find tens to hundreds of YouTube videos uploaded daily claiming to provide these cheats. 

## Distribution
The method of distribution I am focused on is through these YouTube videos. The videos themselves stick to a strict format, starting with a screen recording of the creator downloading their client (through the link provided in the video description), showcasing the disabling of Defender and SmartScreen, and then hard cutting to gameplay where the cheats are active. Although I was instantly overwhelmed with the question of how someone could possibly believe this was a legitimate cheat client, every video had hundreds of views, and the story my friend shared stuck in my head. Obviously, from an educated perspective, this is a targeted way of spreading malware. 

## Reproduction
I wanted to test this for myself. In an attempt to do so, I wrote a very simple piece of code and designed it to look like the ones I saw during my research. With my goal being education and staying professional, including real malware in my file was out of the picture. The executable simply opens a string of Windows message boxes explaining the dangers of running something which explicitly asks for the removal of antivirus, along with showcasing the purpose of my study. As a way of gathering data, it also makes a GET request to a server which I monitor and log. For some extra fun, it grabs an image from the server and sets it as the user's wallpaper; a change entirely harmless and easy to revert, yet impossible to go unnoticed. To package the malware, I recorded and edited a video, following the format I picked up during my research. My video shows two clips of downloading and running the client, one through Chrome and one through Edge, followed by a cut to gameplay I found by downloading a different video.

## Conclusion
I want to make it explicitly clear, my goal is to do NO harm. The people who fall for this method of distribution are uneducated about the dangers and desperate to find what they are looking for. I am not aiming to embarrass any victim, but attempting to expose and create knowledge around how deep this rabbit hole runs.

*PSA:* if you, or anyone you know, is involved in this community as either a victim or a distributor I would love to have a conversation and learn more so please reach out either on discord *.cadenus.* or via github
