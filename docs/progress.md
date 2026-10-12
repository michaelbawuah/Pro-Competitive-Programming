# Progress

- Reference implementations: **835**.
- Official acceptances: see the evidence ledger in `data/acceptances.json`.
- Contest results: see `contests/`; no results are implied by this archive.

This repository is my maintained C++ algorithm reference collection; reference implementations and judge evidence are tracked separately.
Use the practice route to attempt problems, compare approaches, study explanations, and record verified submissions when available.

## Record an acceptance

Add an entry to `data/acceptances.json`, using your real handle and submission URL:

```json
{
  "problem_id": "cses-1083",
  "handle": "your-handle",
  "submission_url": "https://cses.fi/problemset/result/YOUR_RESULT_ID/",
  "date": "YYYY-MM-DD",
  "verdict": "AC",
  "mode": "independent | after-hint | reference-assisted"
}
```

Replace every placeholder. `cp.py check` checks ledger structure, not the remote verdict.
Only record AC after the judge actually reports it. Include a short note about what you learned.
