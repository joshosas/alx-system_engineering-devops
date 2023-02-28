#!/usr/bin/python3
import requests


def number_of_subscribers(subreddit):
    """Write a function that queries the Reddit API and returns
    the number of subscribers (not active users, total subscribers)
    for a given subreddit"""

    base_url = "http://www.reddit.com/r/{:s}/about.json".format(subreddit)
    headers = {'user-agent': 'egsyquest'}
    r = requests.get(base_url, headers=headers)

    if (r.status_code is 302):
        return 0
    if (r.status_code is 404):
        return 0

    return r.json()['data'].get('subscribers', 0)
